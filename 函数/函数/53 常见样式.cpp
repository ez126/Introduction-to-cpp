#include <iostream>
using namespace std;

//����������ʽ
//1���޲��޷�
void test01()
{
	cout << "this is test01 " << endl;
}

//2���в��޷�
void test02(int a)
{
	cout << "this is test02 a= " << a << endl;
}
//�з��ľ���Ҫ����һ����ֵ����������صĽ��
//3���޲��з�
int test03()
{
	cout << "this is test03  " << endl;
	return 1000; 
}

//�в��з�
int test04(int a)
{
	cout << "this is test04 a = " << a << endl;
	return a;
}


int main4() {

	//1���޲��޷���������
	test01();

	//2���в��޷���������
	test02(100);//�вεĻ�����Ҫ������

	//�з��ľ���Ҫ����һ����ֵ����������صĽ��
	//3���޲��з���������
	int num1 = test03();
	cout << "num1= " << num1 << endl;

	//4���в��з���������
	int num2 = test04(10000);
	cout << "num2 = " << num2 << endl;


	system("pause");
	return 0;
}