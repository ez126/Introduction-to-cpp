#include <iostream>
using namespace std;
int main6() {
	int  arr[] = { 4,3,5,6,7,2,1,8,9, };
	int k = 0;
	cout << "ԭ����Ϊ��";
	for (int b = 0; b < 9; b++)
	{
		cout << arr[b]<<" ";
	}
	cout << endl;
	for (int i = 8; i >0; i--)//ÿ�αȽϴ�����һ��ֱ������Ҫ�Ƚ�
	{
		for (int j = 0; j < 8; j++)//9�������а˸������ڵģ�����ѭ���˴ξ�����
			//����j�����9�Ļ�����ͻ���arr[10]������ͻ�����
		{
			while (arr[j] > arr[j + 1])
			{
				 k = arr[j ];
				arr[j] = arr[j+1];
				arr[j + 1] = k;

			}
		}

	}
	cout << "����֮�������Ϊ��";
	for (int a = 0; a < 9; a++)
	{
		cout << arr[a]<<" ";
	}
	cout << endl;





	system("pause");
	return 0;
}