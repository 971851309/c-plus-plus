#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "item.h"
#include <sstream>
#include <iomanip>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //初始化后台逻辑类
    initBackEnd();

    //初始化前端展示的组件
    initUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//初始化货架
void MainWindow::initBackEnd()
{
    shelf = new Shelf();//货架
    cart = new Cart(shelf);//购物车
    shelf->addItem(new Daily("shamp",10.5f,12));
    shelf->addItem(new Toy("Lego",18.5f,25,8));
    shelf->addItem(new Food("chips",12.5f,22,180));
}

void MainWindow::initUI()
{
    img = new QImage();
    img->load("1.jpg");
    *img = img->scaled(900,700);
    ui->imgLabel->setPixmap(QPixmap::fromImage(*img));
    refreshShelf();//第一次展示货架界面
}

//以下是对前端组件展示效果的刷新函数
void MainWindow::refreshShelf()
{
    ui->shelfList->clear();
    for(unsigned int i=0;i<shelf->getItemKinds();i++)
    {
        Item* tempItem = shelf->getItemByIndex(i);
        std::string sName = tempItem->getItemName();

        std::ostringstream streamPrice;
        streamPrice<<std::setiosflags(std::ios::fixed)<<std::setprecision(2);
        streamPrice<<tempItem->getPrice();

        std::string sCount = std::to_string(tempItem->getStock());
        std::string strToDisplay(sName + "\t\tprice:$"+streamPrice.str()+"\t\tstock:"+sCount);
        ui->shelfList->addItem(QString::fromLocal8Bit(strToDisplay.c_str()));
    }
    ui->shelfList->update();//更新组件内容
}

void MainWindow::refreshCart()
{
    ui->cartList->clear();
    for(unsigned int i = 0;i<cart->getItemKinds();i++)
    {
        CartItem* tempItem = cart->getItemByIndex(i);
        std::string sName = tempItem->sItemName;
        std::string sCount = std::to_string(tempItem->nCount);
        std::string strToDisplay(sName+"\t\tamount: "+sCount);
        ui->cartList->addItem(QString::fromLocal8Bit(strToDisplay.c_str()));
    }
    ui->cartList->update();
}

void MainWindow::on_exitBtn_clicked()
{
    this->close();
}

void MainWindow::on_shelfList_itemDoubleClicked(QListWidgetItem *item)
{
    //加入购物车
    int rowNo = ui->shelfList->currentRow();
    if(0!=shelf->takeOneItem(rowNo))//先把库存-1
        return;//如果失败，直接不响应操作

    Item* tempItem;
    tempItem = shelf->getItemByIndex(rowNo);
    cart->addIntoCart(tempItem->getItemName());//加购

    refreshCart();
    refreshShelf();

}

void MainWindow::on_cartList_itemDoubleClicked(QListWidgetItem *item)
{
    int rowNo = ui->cartList->currentRow();
    std::string sName = cart->getItemByIndex(rowNo)->sItemName;
    cart->removeFromCart(rowNo);//购物车-1
    shelf->getItemByName(sName)->add(1);//货架+1
    refreshCart();
    refreshShelf();
}

void MainWindow::on_clearBtn_clicked()
{
    if(0==cart->getItemKinds())
        return;

    for(unsigned int i=0;i<cart->getItemKinds();i++)
    {
        std::string sName = cart->getItemByIndex(i)->sItemName;
        unsigned int nAmount = cart->getItemByIndex(i)->nCount;
        shelf->getItemByName(sName)->add(nAmount);
    }

    cart->clearCart();
    refreshCart();
    refreshShelf();
}
