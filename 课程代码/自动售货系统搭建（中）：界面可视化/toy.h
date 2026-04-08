#pragma once
#include "item.h"
class Toy : public Item
{
private:
	Toy();
	unsigned int nLeastAge;
public:
	Toy(std::string, float, unsigned int, unsigned int);
	std::string showDetail();
};