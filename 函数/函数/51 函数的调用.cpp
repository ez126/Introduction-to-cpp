#include <iostream>
using namespace std;

//����ӷ�����
//���������ʱ��num1��num2��û�����ǲ���
//ֻ��һ����ʽ�ϵĲ���������β�
int add(int num1, int num2)
{
	int sum = num1 + num2;
	return sum;
}

int main2() {

	//main�����е���add����
	int a = 10;
	int b = 20;

	//�������õ��﷨���������� ��������
	//a,b��Ϊʵ�ʵĲ��������ʵ��
	//�����ú���ʱ��ʵ�ε�ֵ�ᴫ�ݸ��β�
	int c = add(a, b);

	cout << " c = " << c << endl;

	a = 100;
	b = 500;

	c = add(a, b);
	cout << " c = " << c << endl;




	system("pause");
	return 0;
}