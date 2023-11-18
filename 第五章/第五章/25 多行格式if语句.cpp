#include<iostream>
using namespace std;

int main2() {

	//选择结构-多行if语句
	//输入考试分数，如果分数大于600，视为考上，在屏幕输出
	// 如果没考上，打印为考上

	//1、输入考试分数

	//2、提示用户输入的分数

	//3、判断 如果大于600  打印考试 否则打印未考上
	
	
	
	//1、输入分数
	int score = 0;
	cout << "请输入一个考试分数： " << endl;
	cin >> score;

	//2、提示用户输入的分数
	cout << "输入的分数为 " << score << endl;

	//3、判断 如果大于600，打印考上，否则打印未考上
	if (score > 600)//大于600执行下面大括号中的内容
	{
		cout << "恭喜考上！" << endl;
	}
	else //不大于600，执行else后面大括号里面的内容
	{

		cout << "未考上" << endl;

	}
	system("pause");
	return 0;
}
