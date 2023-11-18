#include<iostream>
using namespace std;

int main2() {

	//整形；short(2)  int(4)    long(4)   long long(8)
	//可以用sizeof求出数据类型占用内存大小
	//语法： sizeof（ 数据类型 /变量  ）

	short num1 = 10;
	cout << "short占用的内存空间是：" << sizeof(short) << endl;
	//括号里也可以是num1，因为已经是定义这个num1是short类型，的所以sizeof的结果都是2

	int num2 = 10;
	cout << "int占用的内存空间是：" << sizeof(num2) << endl;


	long num3 = 10;
	cout << "long占用的内存空间是：" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间是：" << sizeof(num4) << endl;

	//整型大小的比较
	//short < int <= long <= long long

	system("pause");
	return 0;
}
 