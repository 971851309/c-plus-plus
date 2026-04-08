#pragma once

void swap(int& nVar1, int& nVar2);//声明
//用指针传参实现一下

//通过函数重载把两数相加
//两个int  两个float  一个int一个float
//同名函数
float add(int, int);//相加两个int
float add(int, float);
float add(float, float);
//add 2 double
