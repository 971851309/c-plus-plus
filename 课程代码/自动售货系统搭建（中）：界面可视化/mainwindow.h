#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QListWidgetItem>
#include <QMainWindow>
#include "shelf.h"
#include "cart.h"
#include "daily.h"
#include "toy.h"
#include "food.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_exitBtn_clicked();

    void on_shelfList_itemDoubleClicked(QListWidgetItem *item);

    void on_cartList_itemDoubleClicked(QListWidgetItem *item);

    void on_clearBtn_clicked();

private:
    //类成员变量
    Ui::MainWindow *ui;
    Shelf *shelf;
    Cart *cart;

    QImage *img;

    //以下是货架，购物车的初始化
    void initBackEnd();

    //以下是对前端组件的初始化
    void initUI();

    //以下是对货架list的刷新
    void refreshShelf();

    //以下是对购物车list的刷新
    void refreshCart();

    //以下是对cartInfoText的刷新
    void refreshCartInfo();
};

#endif // MAINWINDOW_H
