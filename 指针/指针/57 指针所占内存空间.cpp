#include<iostream>
using namespace std;
int main2() {

	//ָ����ռ���ڴ�ռ��С
	//32λϵͳ��4���ֽڣ�64λϵͳ��ռ�˸��ֽ�
	int a = 10;
	/*int* p;
	p = &a;*/

	int* p = &a;
	//32λϵͳָ����4���ֽڲ�����ʲô���͵����ݣ�64λϵͳ��ռ�˸��ֽ�
	cout << "sizeif(int *) = " << sizeof(int*) << endl;
	cout << "sizeif(int *) = " << sizeof(float*) << endl;
	cout << "sizeif(int *) = " << sizeof(double*) << endl;
	cout << "sizeif(int *) = " << sizeof(char*) << endl;
	//����ռ�˸��ֽ�
	system("pause");
	return 0;
}