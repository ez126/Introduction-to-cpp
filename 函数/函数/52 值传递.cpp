#include <iostream>
using namespace std;

//ֵ����
//���庯����ʵ���������ֽ��н�������

//���һ����������Ҫ����ֵ��������ʱ�����дvoid
//void���������ͺ������޷���ֵ
void swap1(int num1, int num2)
{
	
	cout << "����ǰ��" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	
	
	int temp = num1;
	num1 = num2;
	num2 = temp;
	//return ;  ����ֵ����Ҫ��ʱ��Ҳ���Բ�д

	cout << "������" << endl;
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
}



int main3() {

	int a = 10;
	int b = 20;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//�������βη����ı䣬������Ӱ��ʵ��

	swap1(a, b);
	//����������num1��num2����Ϊ��ʱ��a��b��ֵ�Ѿ���ֵ��ǰ���ˣ��Ͳ���a��b������
	//���Ծ�������ľ���swap������������
	//���Զ�a��b��û��ʲôӰ��

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}