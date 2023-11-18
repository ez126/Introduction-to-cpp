#include <iostream>
using namespace std;
int main2() {

	//while循环
	//在屏幕中打印 0 ~ 9 这十个数字
	int num = 0;
	/*cout << num << endl;

	num++;
	cout << num << endl;*/
	
	//while()中填入循环条件
	//注意事项   写循环要注意别写死循环
	while (num < 10)
		//while(1)     这个就会一直循环下去
	{
		cout << num << endl;
		num++;
		//cout << num << endl;(这个会让结果输出到10)
	}



	system("pause");
	return 0;
}