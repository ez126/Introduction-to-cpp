#include <iostream>
using namespace std;
int main4() {
	//1����������
	int arr[] = { 2,3,4,5,6,7,8,9 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int i = 0;

	//��ԭ�������
	cout << "ԭ��������Ϊ��";
	for (int a = 0; a < end + 1; a++)
	{
		cout << arr[a];
	}
	cout << endl;
	//ʵ������
	cout << "��ת�����������Ϊ��";
	
	for (start = 0; start <end; start++, end--)
		//��ʼλ��++,����λ��-- ����ʼС�ڽ����ľ�һֱ����
	{
		//��¼��ʼ�±�λ��
		i = arr[start];//ע����һ���ǲ�����arr[i]�ģ��������� arr[i] = arr[start]
		//��Ϊ�����arr[i]��i=0������arr[0]=arr[0]
		
		//��¼�����±�λ��
		arr[start] = arr[end];

		//����λ��Ԫ�ؽ��л���
		arr[end] = i;

	}


	//��ӡ���ֵ
	for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++)
	{
		cout << arr[k];
	}
	cout << endl;

	system("pause");
	return 0;
}