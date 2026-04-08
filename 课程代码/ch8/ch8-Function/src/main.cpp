#include <iostream>
#include "function.h"

int main()
{
	int x = 10, y = 20;
	std::cout << "before: " << x << "\t" << y << std::endl;
	swap(x,y);//µ÷ÓÃ
	std::cout << "after:  " << x << "\t" << y << std::endl;

	int nVar = 1;
	float fVar = 3.14f;
	std::cout << "2 int: \t" << add(nVar, nVar)<<std::endl;
	std::cout << "2 float:\t" << add(fVar, fVar) << std::endl;
	std::cout << "1int 1float:\t" << add(nVar, fVar) << std::endl;
	getchar();
	return 0;
}
