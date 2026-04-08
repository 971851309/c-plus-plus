#include<iostream>
#include<iomanip>
#define DISCOUNT 0.88f


int main()
{
	std::string sItemName1 = "ø…¿÷";
	std::string sItemName2 = " Ì∆¨";
	float fItemPrice1 = 2.99f;
	float fItemPrice2 = 12.5f;
	int nItemCount1 = 0;
	int nItemCount2 = 0;

	float fTotalPrice = 0;
	float fDiscountPrice = 0;

	std::cout << sItemName1 << "\t\t" << fItemPrice1 << "\t\t" << nItemCount1 << std::endl;
	std::cout << sItemName2 << "\t\t" << fItemPrice2 << "\t\t" << nItemCount2 << std::endl;
	std::cout << "total:" << fTotalPrice << "\t\t" << fDiscountPrice << "\t\t" << std::endl;

	nItemCount1++;
	//nItemCount1 += 1;
	//nItemCount1 = nItemCount1 + 1;

	nItemCount2++;
	nItemCount1++;

	fTotalPrice = nItemCount1 * fItemPrice1 + nItemCount2 * fItemPrice2;
	fDiscountPrice = fTotalPrice * DISCOUNT;

	std::cout << std::endl;
	std::cout << sItemName1 << "\t\t" << fItemPrice1 << "\t\t" << nItemCount1 << std::endl;
	std::cout << sItemName2 << "\t\t" << fItemPrice2 << "\t\t" << nItemCount2 << std::endl;
	std::cout << "total:" << fTotalPrice << "\t\t"
			  << std::setiosflags(std::ios::fixed)<<std::setprecision(2)<<fDiscountPrice << "\t\t" << std::endl;

	return 0;
}