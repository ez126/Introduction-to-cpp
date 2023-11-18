#include <iostream>
using namespace std;
#include<string>

int main4() {

	// 1,字符型变量创建方式
	char ch = 'a';
	cout << ch << endl;
	string str1 = "cccyz";
	cout << str1 << endl;
	// 2、变量所占内存大小
	cout << "字符型变量所占内存： " << sizeof(ch) << endl;

	//3、字符型变量常见错误
	//char ch2 = "b"; //要用单引号
	//char ch3='acfaf'；//单引号里面只能是一个字符

	//4、字符型变量对应ASCII编码
	cout << int(ch) << endl;
	cout << "字符串型变量所占内存； " << sizeof(str1) << endl;


	system("pause");
	return 0;
}