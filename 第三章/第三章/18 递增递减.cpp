#include <iostream>
using namespace std;
#include <string>

int main3() {

	//1��ǰ�õ���
	int a = 10;
		++a;
		cout << " a= " << a << endl;

	//2�����õ���
		int b = 10;
		b++;
		cout << "b=" << b << endl;

	//3��ǰ������õ�����
		//ǰ�õ��� ���ñ���+1 Ȼ����б��ʽ����
		int a2 = 10;
		int b2 = ++a2 * 10;
		cout << "a2= " << a2 << endl;
		cout << "b2=" << b2 << endl;
	
		//���õ��� �Ƚ��б��ʽ�����㣬���ñ���+1
		int a3 = 10;
		int b3 = a3++ * 10;
		cout << "a3=" << a3 << endl;//a3=11
		cout << "b3=" << b3 << endl;//b3=100


		//���õݼ�
		int a4 = 2;
		int b4 = a4--*10;
		cout << "a4=" << a4 << endl;
		cout << "b4= " << b4 << endl;

		//ǰ�õݼ�
		int a5 = 2;
		int b5 = --a * 10;
		cout << "a5=" << a5 << endl;
		cout << "b5=" << b5 << endl;

	system("pause");
	return 0;
}