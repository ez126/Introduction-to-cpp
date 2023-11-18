#include<iostream>
using namespace std;

int main5() {
	//就是取三个数中最大的一个

	//1、创建变量
	int a = 0;
	int b = 0;
	int c = 0;

	//2、输入变量
	cout << "请分别输入a，b，c的值" << endl;
	cin >> a;
	cout << "a=" <<a<< endl;
	cin >> b;
	cout << "b=" <<b<< endl;
	cin >> c;
	cout << "c=" <<c<< endl;

	//3、进行比较
	if (a > b)
	{
		if(a>c)
		{
			cout << "最大值为a=" <<a<< endl;
		}
		else
		{
			cout << "最大值为c=" << c << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "最大值为b=" <<b<<endl;
		}
		else
		{
			cout << "最大值为c=" <<c<< endl;
		}
	}





	system("pause");
	return 0;
}