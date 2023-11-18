#include <iostream>
using namespace std;

//常量的定义方式 
//1、#define 宏常量
//2、const修饰的变量 

//1、#define 宏常量（要在main的前面）
#define Day 7

int main4() {


	//
	cout << "一周有：" << Day << "天" << endl;


	//const修饰的变量(可以在main里面)
	const int month = 12;
	//month = 14;错误，const修饰的变量也是成为常量
	cout << "一年总共有" << month << "个月份" << endl;
	system("pause");

	return 0;
} 