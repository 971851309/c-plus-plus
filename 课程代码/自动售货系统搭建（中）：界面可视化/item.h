#pragma once
#include <string>
class Item
{
private:
	std::string sItemName;
	float fPrice;
	unsigned int nStock;
	Item();
public:
	Item(std::string ,float, unsigned int);//有参构造函数
	std::string getItemName();
	float getPrice();
	unsigned int getStock();

	void add(unsigned int nAmount);
	int reduceOne();

	virtual std::string showDetail() = 0;//纯虚函数
};