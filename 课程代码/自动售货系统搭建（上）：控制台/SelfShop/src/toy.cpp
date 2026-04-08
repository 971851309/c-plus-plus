#include "toy.h"
Toy::Toy(std::string sItemName, float fPrice, unsigned int nStock, unsigned int nLeastAge)
	: Item(sItemName, fPrice, nStock)
{
	this->nLeastAge = nLeastAge;
}

std::string Toy::showDetail()
{
	std::string str1 = "Kids love!\n";
	std::string str2 = "Age above: ";
	std::string str3 = std::to_string(nLeastAge);
	return str1 + str2 + str3;
}