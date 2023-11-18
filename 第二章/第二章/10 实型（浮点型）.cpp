#include<iostream>
using namespace std;

int main3() {

		//1、单精度
		//2、双精度
		//默认情况下输出一个小数会显示出6位有效数字
	float f1 = 3.1415926f;//(这个不加f就会默认为double)

	cout << " f1= " << f1 << endl;

	double d1 = 3.1415926;

	cout << " d1= " << d1 << endl;

	//统计float和double占用内存空间
	cout << "float占用内存空间是" << sizeof(float) << endl;//四个字节

	cout << "double占用内存空间是" << sizeof(double) << endl;//八个字节

	//科学计数法

	float f2 = 3e2f;//3*10^2
	cout << " f2= " << f2 << endl;

	float f3 = 3e-2f; //3*10^-2
	cout << " f3= " << f3 << endl;

	system("pause");
	return 0;
}
