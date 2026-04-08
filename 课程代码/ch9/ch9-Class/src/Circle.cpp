#include "Circle.h"
#include <iostream>
//实现、定义
Circle::Circle()
{
	fR = 3.5f;
}//默认构造函数

float Circle::getS()
{
	float fS = PI * fR * fR;
	return fS;
//计算面积
}

float Circle::getC()
{
	float fC = 2 * PI * fR;
	return fC;
}//计算周长

float Circle::getR()
{
	return fR;
}

void Circle::setR(float r)
{
	if (0 >= r)
	{
		std::cout << "set不成功，数据不合法" << std::endl;
		return;//函数结束
	}
	fR = r;
}