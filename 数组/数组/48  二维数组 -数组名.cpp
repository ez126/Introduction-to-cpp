#include <iostream>
using namespace std;
int main8() {
	
	//��λ����������;

	//1�����Բ鿴ռ�ÿռ��С
	int arr1[2][3]
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "��ά����ռ���ڴ�ռ�Ϊ��" << sizeof(arr1) << endl;
	cout << "��ά�����һ��ռ�ÿռ�Ϊ��" << sizeof(arr1[0]) << endl;
	cout << "��ά�����һ��Ԫ��ռ�õ��ڴ�ռ�Ϊ��" << sizeof(arr1[0][0]) << endl;
	cout << "��ά����Ԫ�ظ���Ϊ��" << sizeof(arr1) / sizeof(arr1[0][0]) << endl;
	cout << "��ά����ÿһ�е�Ԫ�ظ���Ϊ��" << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
	cout << "��λ���������Ϊ��" << sizeof(arr1) / sizeof(arr1[0])<< endl;
	cout << "��ά���������Ϊ��" << sizeof(arr1[0])/sizeof(arr1[0][0]) << endl;

	//������1����һ��ת��

	cout << "��ԭ�������ת��֮��Ľ��Ϊ��" << endl;
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
			//��ӦԪ�ؽ��н���
			cout << arr2[i][j] << " ";
		}
		cout << endl;//�����һ������Ԫ��֮����
	}



	//2�����Բ鿴��ά������׵�ַ

	cout << "��ά������׵�ַΪ��" << (int)arr1 << endl;
	cout << "��ά�����һ���׵�ַΪ��" << (int)arr1[0] << endl;
	cout << "��λ����ڶ����׵�ַΪ��" << (int)arr1[1] << endl;
	//��һ����ڶ���֮���12������������Ԫ��

	cout << "��һ��Ԫ�صĵ�ַΪ��" << (int)&arr1[0][0] << endl;
	//����м�Ҫ��һ�� & ȡַ����Ҫ��Ȼ���arr1[0][0]ֻ�Ǵ�������
	cout << "�ڶ���Ԫ�صĵ�ַΪ��" << (int)&arr1[0][1] << endl;

	system("pause");
	return 0;
}