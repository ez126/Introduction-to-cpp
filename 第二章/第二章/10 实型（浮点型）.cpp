#include<iostream>
using namespace std;

int main3() {

		//1��������
		//2��˫����
		//Ĭ����������һ��С������ʾ��6λ��Ч����
	float f1 = 3.1415926f;//(�������f�ͻ�Ĭ��Ϊdouble)

	cout << " f1= " << f1 << endl;

	double d1 = 3.1415926;

	cout << " d1= " << d1 << endl;

	//ͳ��float��doubleռ���ڴ�ռ�
	cout << "floatռ���ڴ�ռ���" << sizeof(float) << endl;//�ĸ��ֽ�

	cout << "doubleռ���ڴ�ռ���" << sizeof(double) << endl;//�˸��ֽ�

	//��ѧ������

	float f2 = 3e2f;//3*10^2
	cout << " f2= " << f2 << endl;

	float f3 = 3e-2f; //3*10^-2
	cout << " f3= " << f3 << endl;

	system("pause");
	return 0;
}
