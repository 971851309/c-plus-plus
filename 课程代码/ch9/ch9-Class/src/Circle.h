#pragma once
#define PI 3.14f
class Circle
{
private:
	//数据
	float fR;
public:
	//方法声明
	Circle();
	float getS();
	float getC();
	float getR();
	void setR(float r);
};