#include <iostream>
using namespace std;
int main3() {

	//1、创建五只小猪的体重
	int arr1[5] = { 300,360,200,400,250 };
	//2、从数组中找到最大值
	int max = 0;//先认定一个最大值为0
	for (int i = 0; i < 5; i++)
	{
		if (max > arr1[i])
		{
			max = max;
		}
		else
		{
			max = arr1[i];
		}
	}
	//3、打印最大值
	cout << "体重最大的小猪重量为:" << max << endl;

	
	system("pause");
	return 0;
}