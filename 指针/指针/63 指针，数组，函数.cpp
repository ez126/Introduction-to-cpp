#include<iostream>
using namespace std;

//冒泡排序函数   参数1 数组的首地址  参数2 数组的长度
void bubbleSort(int* arr , int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j <  len - i - 1; j++)
		{
			//如果j > j+1的值  交换数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				cout <<"A" << arr[j] << endl;
			}
		}
	}
}

//打印数组的函数
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



int main() {

	//1、先创建一个数组
	int arr[10] = { 2,4,5,9,7,1,6,3,8,0 };

	//数组长度
	int len = sizeof(arr) / sizeof(arr[1]);
	//2、创建函数，实现冒泡排序
	bubbleSort(arr, len);

	//3、打印排序后的数组

	printArray(arr, len);

		/*cout << "排序后的数组为：";
		for (int m = 0; m < 10; m++)
		{
			cout << arr[m] << " ";
		}
		cout << endl;*/

	system("pause");
	return 0;
}