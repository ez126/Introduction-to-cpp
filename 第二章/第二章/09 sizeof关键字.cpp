#include<iostream>
using namespace std;

int main2() {

	//���Σ�short(2)  int(4)    long(4)   long long(8)
	//������sizeof�����������ռ���ڴ��С
	//�﷨�� sizeof�� �������� /����  ��

	short num1 = 10;
	cout << "shortռ�õ��ڴ�ռ��ǣ�" << sizeof(short) << endl;
	//������Ҳ������num1����Ϊ�Ѿ��Ƕ������num1��short���ͣ�������sizeof�Ľ������2

	int num2 = 10;
	cout << "intռ�õ��ڴ�ռ��ǣ�" << sizeof(num2) << endl;


	long num3 = 10;
	cout << "longռ�õ��ڴ�ռ��ǣ�" << sizeof(long) << endl;

	long long num4 = 10;
	cout << "long longռ�õ��ڴ�ռ��ǣ�" << sizeof(num4) << endl;

	//���ʹ�С�ıȽ�
	//short < int <= long <= long long

	system("pause");
	return 0;
}
 