#include <iostream>
using namespace std;
#include "swap.h"



//函数的份文件编写
//实现两个数字进行交换的函数
 //函数的声明
/*void swap(int a, int b);*///因为不需要返回值，所以用void
//函数的定义
//void swap(int a, int b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//}

//1、创建.h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明(还是要在开头加上 #include<iostream>   using namespace std;)
//4、在源文件中写函数的定义(要在开头加上#include"头文件.h")

int main() {

	int a = 10;
	int b = 20;

	swap(a, b);

	


	system("pause");
	return 0;
}