#include <iostream>
using namespace std;
#include <string>
int main() {

	//创建分数数组
	int score[3][3] =
	{
		{100,100,100},
		{90, 50, 100},
		{60, 70, 80 }
	};

	string names[3] = { "张三","李四","王五" };//名字是一个字符串

	//统计每个人的分数总和
	for (int i = 0; i < 3; i++)
	{
		int a = 0; //统计分数总和的变量
		for (int j = 0; j < 3; j++)
		{
			a = score[i][j] + a; //可以用赋值运算符 a+=score[i][j]
		}
		cout << names[i]<<"的总成绩为：" << a<< endl;
	}

	system("pause");
	return 0;
}