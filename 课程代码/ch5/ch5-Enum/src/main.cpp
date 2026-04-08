#include<iostream>

int main()
{
	int nA = 2;
	int nB = 16;
	enum Method {ADD,SUB,MUL};//¼Ó¼õ³Ë
	Method method = ADD;

	if (ADD == method)
	{
		std::cout << nA + nB;
	}
	else if (SUB == method)
	{
		std::cout << nA - nB;
	}
	else if (MUL == method)
	{
		std::cout << nA * nB;
	}



}