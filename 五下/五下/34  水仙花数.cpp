#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>
#include <cmath>


int main5() {

	//1、打印所有三位数字

	//2、从所有数字中找到水仙花数
	int num = 100;

	do
	{
		//从所有三位数中找到水仙花数
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if ((pow(a,3) + pow(b,3) + pow(c,3))==num)//如果是水仙花数，才打印
		{

			cout << num << endl;
			
		}
		num++;
	} 
	

	while (num < 1000);




	system("pause");
	return 0;
}