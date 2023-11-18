#include <iostream>
using namespace std;
int main6() {
	int  arr[] = { 4,3,5,6,7,2,1,8,9, };
	int k = 0;
	cout << "原数组为：";
	for (int b = 0; b < 9; b++)
	{
		cout << arr[b]<<" ";
	}
	cout << endl;
	for (int i = 8; i >0; i--)//每次比较次数减一，直到不需要比较
	{
		for (int j = 0; j < 8; j++)//9个数，有八个是相邻的，所以循环八次就行了
			//这里j如果是9的话下面就会有arr[10]，程序就会乱码
		{
			while (arr[j] > arr[j + 1])
			{
				 k = arr[j ];
				arr[j] = arr[j+1];
				arr[j + 1] = k;

			}
		}

	}
	cout << "排序之后的数组为：";
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a]<<" ";
	}
	cout << endl;





	system("pause");
	return 0;
}