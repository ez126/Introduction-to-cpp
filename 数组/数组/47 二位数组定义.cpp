#include <iostream>
using namespace std;
int main7() {
	
	//使用第二种更为直观一点


	//二维数组的定义方式
	/*1.数据类型数组名[行数][列数];
	2．数据类型数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4 } };
	3．数据类型数组名[行数][列数] = { 数据1，数据2，数据3，数据4 };
	4．数据类型数组名[][列数] = { 数据1，数据2，数据3，数据4 };
	*/


	//1、数据类型数组名[行数][列数];
	cout << "第一种形式: " << endl;
	int arr1[2][3];//定义数组的这个[2][3]表示两行三列
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;

	/*cout << arr1[0][0] << endl;
	cout << arr1[0][1] << endl;
	cout << arr1[0][2] << endl;
	cout << arr1[1][0] << endl;
	cout << arr1[1][1] << endl;
	cout << arr1[1][2] << endl;*/
	
	//外层循环打印行数，内层循环打印列数
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j]<<" ";
		}
		cout << endl;
	}
	cout << endl;

	//	2．数据类型数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4 } };
	
	cout << "第二种形式: " << endl;
	int arr2[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//	3．数据类型数组名[行数][列数] = { 数据1，数据2，数据3，数据4 };

	cout << "第三种形式: " << endl;
	int arr3[2][3] = { 1,2,3,4,5,6};
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//	4．数据类型数组名[][列数] = { 数据1，数据2，数据3，数据4 };
	cout << "第四种形式: " << endl;
	int arr4[][3] = { 1,2,3,4,5,6};

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	







	system("pause");
	return 0;
}