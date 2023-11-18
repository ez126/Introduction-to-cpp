#include<iostream>
using namespace std;

int main3() {

	//选择结构中的 多条件if语句
	//输入一个分数，如果大于600分，视为考上一本，在屏幕输出
	//大于500，视为考上二本大学，屏幕输出
	//大于400，视为考上三本大学，屏幕输出
	//小于等于400分，视为未考上本科，屏幕上输出

	//1、用户输入分数
	int score = 0;
	cout << "输入分数：" << endl;
	cin >> score;

		//2、提示用户输入的分数
		cout << "输入的分数为：" << score << endl;

	//3、判断
	//大于600，考上一本
	//大于500，考上二本
	//大于400，三本
	//前三个都不满足

if(score>600)
{
	cout << "恭喜考上一本" << endl;
	}
else if (score > 500)//第二个判断条件
{
	cout << "恭喜考上二本大学" << endl;
}
else if (score > 400)//第三个判断条件
{
	cout << "恭喜考上三本大学" << endl;
}
else//最后的分支
{
	cout << "未考上本科大学，请再接再厉" << endl;
}
	system("pause");
	return 0;
}
