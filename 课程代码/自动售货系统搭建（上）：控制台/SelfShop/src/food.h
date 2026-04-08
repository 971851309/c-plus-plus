#pragma once
#include "item.h"
class Food : public Item
{
private:
	Food();
	unsigned int nDaysExp;
public:
	Food(std::string, float, unsigned int, unsigned int);
	std::string showDetail();
};