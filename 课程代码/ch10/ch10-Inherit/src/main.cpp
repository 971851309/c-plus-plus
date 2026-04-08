#include <iostream>
class Father
{
private:
	int nVarPri;
public:
	int nVarPub;
	Father()
	{
		nVarPri = nVarPub = 0;
		std::cout << "父类的默认构造函数被调用"<<std::endl;
	}
	Father(int i)
	{
		std::cout << "父类的有参构造函数被调用："<<i << std::endl;
	}
	void display()
	{
		std::cout << "父类的成员函数被调用" << std::endl;
	}

	~Father()
	{
		std::cout << "父类的析构函数被调用" << std::endl;
	}

};

class Son : public Father //公有继承 private: 私有继承   protected:保护继承
{
public:
	Son()
	{
		std::cout << "子类的默认构造函数被调用" << std::endl;
	}
	~Son()
	{
		std::cout << "子类的析构函数被调用" << std::endl;
	}
};

//Son 是 继承自 Father的
//Son 拥有 Father 所有成员
int main()
{
	Son* ptr1 = new Son;
	std::cout << ptr1->nVarPri << std::endl;//成员变量
	ptr1->display();//成员函数

	delete(ptr1);

	getchar();
	return 0;
}