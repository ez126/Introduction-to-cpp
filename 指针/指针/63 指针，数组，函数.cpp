#include<iostream>
using namespace std;

//ð��������   ����1 ������׵�ַ  ����2 ����ĳ���
void bubbleSort(int* arr , int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j <  len - i - 1; j++)
		{
			//���j > j+1��ֵ  ��������
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

//��ӡ����ĺ���
void printArray(int* arr, int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}



int main() {

	//1���ȴ���һ������
	int arr[10] = { 2,4,5,9,7,1,6,3,8,0 };

	//���鳤��
	int len = sizeof(arr) / sizeof(arr[1]);
	//2������������ʵ��ð������
	bubbleSort(arr, len);

	//3����ӡ����������

	printArray(arr, len);

		/*cout << "����������Ϊ��";
		for (int m = 0; m < 10; m++)
		{
			cout << arr[m] << " ";
		}
		cout << endl;*/

	system("pause");
	return 0;
}