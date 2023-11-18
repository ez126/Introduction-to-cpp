#include<iostream>
using namespace std;
int main4() {

	//野指针 
	//在程序中要尽量避免出现野指针
	int* p =(int *) 0x1100;


	cout << *p << endl;//没有访问权限
	

	//空指针和野指针都不是我们申请的空间，因此不要访问

	system("pause");



	return 0;
}