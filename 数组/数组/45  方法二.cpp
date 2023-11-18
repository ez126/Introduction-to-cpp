#include <iostream>
using namespace std;
int main4() {
	//1、创建数组
	int arr[] = { 2,3,4,5,6,7,8,9 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int i = 0;

	//将原数组输出
	cout << "原数组数据为：";
	for (int a = 0; a < end + 1; a++)
	{
		cout << arr[a];
	}
	cout << endl;
	//实现逆置
	cout << "逆转后的数组数据为：";
	
	for (start = 0; start <end; start++, end--)
		//起始位置++,结束位置-- ，开始小于结束的就一直进行
	{
		//记录起始下标位置
		i = arr[start];//注意这一串是不能用arr[i]的，及不能是 arr[i] = arr[start]
		//因为如果是arr[i]，i=0，就是arr[0]=arr[0]
		
		//记录结束下标位置
		arr[start] = arr[end];

		//将两位置元素进行互换
		arr[end] = i;

	}


	//打印输出值
	for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
	{
		cout << arr[k];
	}
	cout << endl;

	system("pause");
	return 0;
}