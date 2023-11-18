#include <iostream>
using namespace std;
#include <string> //c++的字符串前面要加这个头文件

int main7() {

	//1、创建bool数据类型
	bool flag = true;//flag代表真，c++真就是1，假就是
	cout << flag << endl;

	flag = false;
	cout << flag << endl;

	//2、查看bool类型所占空间

	cout << "bool类型所占内存空间是：" << sizeof(bool) << endl;






	system("pause");
	return 0;
}