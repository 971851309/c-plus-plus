#include <iostream>
#include "Circle.h"

//圆形、矩形

//
//class Rect
//{
//public:
//	//数据
//	float fA;
//	float fB;
//	
//	//方法
//	Rect()
//	{
//		fA = 10.f;
//		fB = 5.0f;
//	}//默认构造函数
//
//	Rect(float a, float b)
//	{
//		fA = a;
//		fB = b;
//	}//有参构造函数
//
//	float getS()
//	{
//		return fA * fB;
//	}//获取面积
//
//	float getC()
//	{
//		return 2 * (fA + fB);
//	}//计算周长
//
//
//
//};

int main()
{
	Circle circle;//定义了一个名为circle的Circle变量：类的实例化,构造函数的调用发生于此
	std::cout << "半径:" << circle.getR() << std::endl;
	std::cout << "面积:" << circle.getS()<< std::endl;
	std::cout << "周长:" << circle.getC() << std::endl;
	std::cout << std::endl;
	circle.setR(-10.f);
	std::cout << "半径:" << circle.getR() << std::endl;
	std::cout << "面积:" << circle.getS() << std::endl;
	std::cout << "周长:" << circle.getC() << std::endl;
	std::cout << std::endl;
	circle.setR(10.f);
	std::cout << "半径:" << circle.getR() << std::endl;
	std::cout << "面积:" << circle.getS() << std::endl;
	std::cout << "周长:" << circle.getC() << std::endl;
	std::cout << std::endl;

	//Rect rect(18,9);//定义了一个名为rect的Rect变量
	//std::cout << "长:" << rect.fA << std::endl;
	//std::cout << "宽:" << rect.fB << std::endl;
	//std::cout << "面积:" << rect.getS() << std::endl;
	//std::cout << "周长:" << rect.getC() << std::endl;

	getchar();
	return 0;
}