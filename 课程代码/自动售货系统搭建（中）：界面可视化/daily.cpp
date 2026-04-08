#include "daily.h"

Daily::Daily(std::string sItemName, float fPrice, unsigned int nStock)
	: Item(sItemName, fPrice, nStock)
{
}

std::string Daily::showDetail()
{
	return "good for daily use!";
}