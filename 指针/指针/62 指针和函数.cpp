#include<iostream>
using namespace std;

//ʵ���������ֽ��н���
void swap01(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;

	cout << "swap01 a = " << a << endl;
	cout << "swap01 b = " << b << endl;
}

void swap02(int* p1,int *p2) 
{

	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;

}



int main8() {

	//ָ��ͺ���
	//1��ֵ����

	int a = 10;
	int b = 20;
	swap01(a, b);

	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	//�����a��b����a=10��b=20�����ʵ�Σ�������ֻ���β�

	//2����ַ����
	//����ǵ�ַ���ݣ�����ͨ���β�����ʵ��
	swap02(&a, &b);
	cout << "��ַ���� " << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;



	system("pause");
	return 0;
}