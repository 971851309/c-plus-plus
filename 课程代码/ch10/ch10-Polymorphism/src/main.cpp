#include <iostream>
class Shape
{
public:
	Shape()
	{}
	virtual float getS()//虚函数
	{
		std::cout << "Shape的getS被调用"<<std::endl;
		return 0;
	}
	virtual float getC()
	{
		std::cout << "Shape的getC被调用" << std::endl;
		return 0;
	}
};

class Square : public Shape
{
public:
	float fA;
	Square( float a)
	{
		fA = a;
	}
	float getS()//override 重写 覆盖
	{
		return fA * fA;
	}
	float getC()//override 重写 覆盖
	{
		return 4 * fA;
	}
};

class Circle : public Shape
{
public:
	float fR;
	Circle(float fVar)
	{
		fR = fVar;
	}
	float getS()//override 重写 覆盖
	{
		return 3.1415F*fR * fR;
	}
	float getC()//override 重写 覆盖
	{
		return 2 * 3.1415f * fR;
	}
};

float getShapeS(Shape* shape)
{
	return shape->getS();
}5

float getShapeC(Shape* shape)
{
	return shape->getC();
}


int main()
{
	Circle *cirPtr = new Circle(3.f);
	Square  *squPtr = new Square(3.f);

	std::cout << "圆面积：" << getShapeS(cirPtr) << std::endl;
	std::cout << "正方形面积：" << getShapeS(squPtr) << std::endl;

	getchar();
	return 0;
}