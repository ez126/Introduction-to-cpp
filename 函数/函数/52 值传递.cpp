#include <iostream>
using namespace std;

//值传递
//定义函数，实现两个数字进行交换函数

//如果一个函数不需要返回值，声明的时候可以写void
//void定义无类型函数，无返回值
void swap1(int num1, int num2)
{
	
	cout << "交换前：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	//return ;  返回值不需要的时候也可以不写

	cout << "交换后：" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}



int main3() {

	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//函数的形参发生改变，并不会影响实参

	swap1(a, b);
	//这个输出的是num1和num2，因为此时的a，b的值已经赋值给前者了，就不管a，b的事了
	//所以就是输出的就是swap这个函数里面的
	//所以对a，b并没有什么影响

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}