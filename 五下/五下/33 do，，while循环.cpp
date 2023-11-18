#include <iostream>
using namespace std;
//time系统时间头文件包含
#include <ctime>


int main4() {

	//do...while语句
	//在屏幕中输出0 ~ 9这十个数字

	int num = 0;

	do
	{
		cout << num << endl;
		num++;
	} while (num );

	//do..while和while循环区别在于 do...while会先执行一次循环语句

	system("pause");
	return 0;
}