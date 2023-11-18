#include <iostream>
using namespace std;


//标识符的命名规则
//1、标识符不可以是关键字
//2、标识符是由字母、数字、下划线构成
//3、标识符第一个字符只能是字母或者是下划线
//4、 标识符区分大小写

int main() {

	//1、标识符不可以是关键字
	//int int = 10;

	//2、标识符是由字母、数字、下划线构成
	int abc = 10;
	int _abc = 20;
	int _123 = 30;

	//3、标识符第一个字符只能是字母或者是下划线
	//int 123abc = 40;

	//4、 标识符区分大小写
	int aaa = 100;
	//cout << AAA << endl;//AAA与aaa不是一个

	//起名最好见名知意

	int num1 = 10;
	int num2 = 20;
	int sum1 = num1 + num2;
	cout << "num1+num2=" << sum1 << endl;




	system("pause");
	return 0;
}