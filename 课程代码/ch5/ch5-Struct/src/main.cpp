#include<iostream>

int main()
{
	typedef unsigned int uInt;
	typedef struct OneStudentAtSchool
	{
		uInt nId;
		std::string sName;
		uInt nGrade;
	}Student;
	Student student1;

	//student1.nGrade = 3;
	//student1.nId = 2019001;
	//student1.sName = "Mike";

	std::cout << student1.nId << std::endl;
	std::cout << student1.sName << std::endl;
	std::cout << student1.nGrade << std::endl;
	return 0;
}
