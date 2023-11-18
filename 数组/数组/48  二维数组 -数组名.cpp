#include <iostream>
using namespace std;
int main8() {
	
	//二位数组名称用途

	//1、可以查看占用空间大小
	int arr1[2][3]
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间为：" << sizeof(arr1) << endl;
	cout << "二维数组第一行占用空间为：" << sizeof(arr1[0]) << endl;
	cout << "二维数组第一个元素占用地内存空间为：" << sizeof(arr1[0][0]) << endl;
	cout << "二维数组元素个数为：" << sizeof(arr1) / sizeof(arr1[0][0]) << endl;
	cout << "二维数组每一列的元素个数为：" << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	cout << "二位数组的行数为：" << sizeof(arr1) / sizeof(arr1[0])<< endl;
	cout << "二维数组的列数为：" << sizeof(arr1[0])/sizeof(arr1[0][0]) << endl;

	//对数组1进行一个转置

	cout << "对原数组进行转置之后的结果为：" << endl;
	int arr2[3][2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr2[j][i] = arr1[i][j];
		}
	}
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			//对应元素进行交换
			cout << arr2[i][j] << " ";
		}
		cout << endl;//输出第一行两个元素之后换行
	}



	//2、可以查看二维数组的首地址

	cout << "二维数组的首地址为：" << (int)arr1 << endl;
	cout << "二维数组第一行首地址为：" << (int)arr1[0] << endl;
	cout << "二位数组第二行首地址为：" << (int)arr1[1] << endl;
	//第一行与第二行之间差12，正好是三个元素

	cout << "第一个元素的地址为：" << (int)&arr1[0][0] << endl;
	//这个中间要加一个 & 取址符，要不然这个arr1[0][0]只是代表数字
	cout << "第二个元素的地址为：" << (int)&arr1[0][1] << endl;

	system("pause");
	return 0;
}