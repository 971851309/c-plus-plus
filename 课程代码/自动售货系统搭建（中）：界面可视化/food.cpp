#include "food.h"
Food::Food(std::string sItemName, float fPrice, unsigned int nStock, unsigned int nDaysExp)
	: Item(sItemName, fPrice, nStock)
{
	this->nDaysExp = nDaysExp;
}

std::string Food::showDetail()
{
	std::string str1 = "Yummy!\n";
	std::string str2 = " days to expire.";
	std::string str3 = std::to_string(nDaysExp);
	return str1 + str3 + str2;
}