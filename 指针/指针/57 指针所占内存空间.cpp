#include<iostream>
using namespace std;
int main2() {

	//指针所占的内存空间大小
	//32位系统是4个字节，64位系统是占八个字节
	int a = 10;
	/*int* p;
	p = &a;*/

	int* p = &a;
	//32位系统指针是4个字节不管是什么类型的数据，64位系统是占八个字节
	cout << "sizeif(int *) = " << sizeof(int*) << endl;
	cout << "sizeif(int *) = " << sizeof(float*) << endl;
	cout << "sizeif(int *) = " << sizeof(double*) << endl;
	cout << "sizeif(int *) = " << sizeof(char*) << endl;
	//都是占八个字节
	system("pause");
	return 0;
}