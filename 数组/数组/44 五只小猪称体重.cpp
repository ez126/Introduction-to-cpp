#include <iostream>
using namespace std;
int main3() {

	//1��������ֻС�������
	int arr1[5] = { 300,360,200,400,250 };
	//2�����������ҵ����ֵ
	int max = 0;//���϶�һ�����ֵΪ0
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
	//3����ӡ���ֵ
	cout << "��������С������Ϊ:" << max << endl;

	
	system("pause");
	return 0;
}