#include <iostream>
using namespace std;
#include <string>

int main3() {

	//1、前置递增
	int a = 10;
		++a;
		cout << " a= " << a << endl;

	//2、后置递增
		int b = 10;
		b++;
		cout << "b=" << b << endl;

	//3、前置与后置的区别
		//前置递增 先让变量+1 然后进行表达式运算
		int a2 = 10;
		int b2 = ++a2 * 10;
		cout << "a2= " << a2 << endl;
		cout << "b2=" << b2 << endl;
	
		//后置递增 先进行表达式的运算，后让变量+1
		int a3 = 10;
		int b3 = a3++ * 10;
		cout << "a3=" << a3 << endl;//a3=11
		cout << "b3=" << b3 << endl;//b3=100


		//后置递减
		int a4 = 2;
		int b4 = a4--*10;
		cout << "a4=" << a4 << endl;
		cout << "b4= " << b4 << endl;

		//前置递减
		int a5 = 2;
		int b5 = --a * 10;
		cout << "a5=" << a5 << endl;
		cout << "b5=" << b5 << endl;

	system("pause");
	return 0;
}