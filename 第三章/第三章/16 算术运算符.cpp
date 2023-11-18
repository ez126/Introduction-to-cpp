#include <iostream>
using namespace std;
#include <string>

int main1() {

	//加减乘除
	int a1 = 10;
	int b1 = 3;

	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除  结果还是整数 会将小数部分清楚

	int a2 = 10;
	int b2 = 20;
	cout << a2 / b2 << endl;

	int a3 = 10;
	int b3 = 0;
	//cout << a3 / b3 << endl;//分母不是0

	//两个小数相除
	double d1 = 0.5;
	double d2 = 0.2;
	cout << d1 / d2 << endl;//这个结果就是小数了



	system("pause");
	return 0;
}