#include<iostream>
using namespace std;

int main1() {

	//选择结构 单行if语句
	//用户输入分数 ，如果大于600，视为考上一本，在屏幕上输出

	//1、用户输入分数
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;

	//2、打印用户输入分数
	cout << "输入的分数为：" << score << endl;

	//3、判断分数是否大于600，如果大于，则输出
	//注意事项 if条件后面不要加分号
	if (score > 600)//这个后面不要加分号，否则无论这个语句正确与否，都是执行下面的代码 
	{
		cout << "恭喜考上" << endl;

	}


	system("pause");
	return 0;
}
