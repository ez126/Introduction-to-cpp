#include <iostream>
using namespace std;

//函数的声明
//比较函数，实现两个整型的数字进行比较，返回较大的值


//提前告诉编译器函数的存在，可以利用函数的声明
//函数的声明
//声明可以写多次，但是定义只能有一次
int max1(int a, int b);
int max1(int a, int b);
int max1(int a, int b);
//函数的定义
int max1(int a, int b)
{
	//也可以用三目运算符
	return a > b ? a : b;//这个一句话就可以解决
//三目运算符的结果是一个数，就直接返回也行
}
//下面是错的，声明只能有一次
//int max(int a, int b)
//{
//	//也可以用三目运算符
//	return a > b ? a : b;//这个一句话就可以解决
//
//}

int main5() {


	int a = 10;
	int b = 20;
	cout << max1(a, b) << endl;




	system("pause");
	return 0;
}

//函数的定义
//int max1(int a, int b)
//{
//	//也可以用三目运算符
//	return a > b ? a : b;//这个一句话就可以解决
//	
//	/*if (a > b)
//	{
//		int m = a;
//	}
//	else
//	{
//		int m = b;
//	}*/
//}
