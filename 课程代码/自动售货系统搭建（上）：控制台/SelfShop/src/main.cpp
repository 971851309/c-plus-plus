#include"item.h"
#include "shelf.h"
#include"cart.h"
#include "food.h"
#include "toy.h"
#include "daily.h"
#include <iostream>
#include <fstream>
#include <iomanip>

void initShelf(Shelf* shelf);
void display(Shelf*, Cart*);
int addCart(std::string , Shelf*, Cart*);

int main()
{
	Shelf* shelf = new Shelf;
	Cart* cart = new Cart(shelf);
	std::cout << "欢迎！" << std::endl;
	initShelf(shelf);
	display(shelf, cart);

	std::cout << ":";
	std::string strItemName;
	std::cin >> strItemName;

	while (0 != strItemName.compare("exit"))
	{
		if (0 != addCart(strItemName, shelf, cart))
		{
			display(shelf, cart);
			std::cout << "有误，请重新输入";
		}
		else
		{
			display(shelf, cart);
			std::cout << "成功，请继续输入";
		}
		std::cout << ":";
		std::cin >> strItemName;
	}
	return 0;
}

void initShelf(Shelf* shelf)
{
/*
	shelf->addItem(new Daily("Shamp", 15.5, 29));
	shelf->addItem(new Toy("Car", 180.0, 3,6));
	shelf->addItem(new Food("Milk", 3.5, 19, 12));*/

	std::string strItemName;
	float fPrice;
	unsigned int nCount, nDaysExp;
	std::ifstream fin;
	fin.open("food.txt");//1.文件的位置：路径  2.文件的名字
	if (fin.is_open())
	{
		while (!fin.eof())//eof: end of file
		{
			fin >> strItemName >> fPrice >> nCount >> nDaysExp;
			shelf->addItem(new Food(strItemName ,fPrice ,nCount , nDaysExp));
		}
	}
	fin.close();
}
void display(Shelf* shelf, Cart* cart)
{
	std::cout << std::endl << "------货架------" << std::endl;
	for (int i = 0; i < shelf->getItemKinds(); i++)
	{
		Item* tempPtr = shelf->getItemByIndex(i);
		std::cout << tempPtr->getItemName() << "\t\t价格:" << std::setiosflags(std::ios::fixed) << std::setprecision(2)
			<< tempPtr->getPrice() << "\t\t库存:" << tempPtr->getStock() << std::endl;
	}
	std::cout << std::endl << "------购物车------" << std::endl;
	for (int i = 0; i < cart->getItemKinds(); i++)
	{
		CartItem* tempPtr = cart->getItemByIndex(i);
		std::cout << tempPtr->sItemName << "\t\t数量:" << tempPtr->nCount << std::endl;
	}
}
int addCart(std::string strItemName, Shelf* shelf, Cart* cart)
{
	Item* tempPtr = shelf->getItemByName(strItemName);
	if (nullptr == tempPtr || 0 == tempPtr->getStock())//短路原则
	{
		return -1;
	}
	tempPtr->reduceOne();
	cart->addIntoCart(strItemName);
	return 0;
}