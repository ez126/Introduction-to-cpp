#include <iostream>
using namespace std;
#include <string>

int main2() {
	//取模运算本质就是求余数
	int a1 = 10;
	int b1 = 3;
	cout << a1 % b1 << endl;

	int a2 = 10;
	int b2 = 20;
	cout << a2 % b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//除数不能为0，所以也是做不了取模运算的
	//cout << a3 % b3 << endl;

	//两个小数是不能做取模运算的
	double d1 = 1.11;
	double d2 = 2.33;
	//cout << d1 % d2 << endl;

	system("pause");
	return 0;
}