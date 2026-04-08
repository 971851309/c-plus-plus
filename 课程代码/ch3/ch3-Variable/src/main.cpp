#include<iostream>
#define PI "anjlds"
int main()
{
	int nVar = 2;
	short shVar;
	long lVar;
	char cVar;

	float fVar = 2.71f;
	//float fVar2 = 2.f;
	double dVar = 3.1415926;
	//变量的声明/声明初始化


	nVar = 10;
	shVar = 2;
	lVar = 20190526;
	cVar = 'a';
	//给变量赋值的一个方式

	//std::cout << "类型\t\t" << "大小\t\t" << "值" << std::endl;
	//std::cout << "int\t\t" << sizeof(int) << "\t\t" << nVar<<std::endl;
	//std::cout << "long\t\t" << sizeof(long) << "\t\t" << lVar << std::endl;
	//std::cout << "double\t\t" << sizeof(double) << "\t\t" << dVar << std::endl;
	////变量的使用（读取）

	std::cout << PI;

	return 0;

}