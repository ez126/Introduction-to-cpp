#include <iostream>
using namespace std;
#include<string>

int main4() {

	// 1,�ַ��ͱ���������ʽ
	char ch = 'a';
	cout << ch << endl;
	string str1 = "cccyz";
	cout << str1 << endl;
	// 2��������ռ�ڴ��С
	cout << "�ַ��ͱ�����ռ�ڴ棺 " << sizeof(ch) << endl;

	//3���ַ��ͱ�����������
	//char ch2 = "b"; //Ҫ�õ�����
	//char ch3='acfaf'��//����������ֻ����һ���ַ�

	//4���ַ��ͱ�����ӦASCII����
	cout << int(ch) << endl;
	cout << "�ַ����ͱ�����ռ�ڴ棻 " << sizeof(str1) << endl;


	system("pause");
	return 0;
}