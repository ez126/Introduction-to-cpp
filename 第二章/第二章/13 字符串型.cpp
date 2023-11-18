#include <iostream>
using namespace std;
#include <string> //c++的字符串前面要加这个头文件

int main6() {

	
		char str1[] = "asdasd";
		cout << str1 << endl;

		//1、c风格的字符串 
		//注意是要 char 字符串名 []要有[]
		//后面要双引号
		char str[] = "hello world ";
		cout << str << endl;

		//2、c++风格的字符串
		//包含一个头文件 #include <string>
		string str2 = "hello world ";
		cout << str2 << endl;


	system("pause");
	return 0;
}