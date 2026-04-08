#include "function.h"//声明所在的头文件
void swap(int& nVar1, int& nVar2)//定义
{
	int nTemp = nVar1;
	nVar1 = nVar2;
	nVar2 = nTemp;
}

float add(int nVar1, int nVar2)
{
	return (float)(nVar1 + nVar2);
}
float add(int nVar, float fVar)
{
	return nVar + fVar;
}
float add(float fVar1, float fVar2)
{
	return fVar1 + fVar2;
}
