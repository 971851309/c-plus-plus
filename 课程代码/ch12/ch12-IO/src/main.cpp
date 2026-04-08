#include<iostream>
#include<fstream>
int main()
{

	int nVar1, nVar2;
	float fVar1, fVar2;
	std::string str1, str2;

	//std::cin >> nVar1 >> fVar1 >> str1;
	//std::cout << nVar1 << "\t" << fVar1 << "\t" << str1 << std::endl;
	//std::cin >> nVar2 >> fVar2 >> str2;
	//std::cout << nVar1 << "\t" << fVar1 << "\t" << str1 << std::endl;
	
	std::ifstream fin;
	std::ofstream fout;
	//定义文件操作的对象
	fin.open("test.txt");//只读打开：如果不存在，打开失败；不能写
	fout.open("result.txt");//强制打开：如果不存在，创造并打开； 如果存在呢，删掉，再创造，再打开
	//打开文件
	if (!fin.is_open()||!fout.is_open())
	{
		std::cout << "文件打开失败" << std::endl;
		return -1;
	}

	fin >> nVar1 >> fVar1 >> str1;
	fin >> nVar2 >> fVar2 >> str2;
	std::cout << nVar1 << "\t" << fVar1 << "\t" << str1 << std::endl;
	fout << nVar1 << "\t" << fVar1 << "\t" << str1 << std::endl;
	
	std::cout << nVar2 << "\t" << fVar2 << "\t" << str2 << std::endl;
	fout << nVar2 << "\t" << fVar2 << "\t" << str2 << std::endl;


	fin.close();
	fout.close();
	getchar();
	return 0;
}