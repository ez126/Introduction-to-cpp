#include<iostream>
using namespace std;

int main4() {


	/*
	提示用户输入一个高考考试分数，根据分数做如下判断
	·分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科;·在一本分数中，如果大于700分I考入北大，大于650分，考入清华，大于600考入人大。

	·分数如果大于600分视为考上一本，
	大于500分考上二本，
	大于400考上三本，
	其余视为未考上本科;
		·在一本分数中，如果大于700分I考入北大，
		大于650分，考入清华，
		大于600考入人大。
	*/

	//1、提示输入一个分数
	cout << "输入一个分数：" << endl;
	int score = 0;
	cin >> score;
	//2、显示高考分数
	cout << "输入的分数为 ：" << score << endl;

	//3、判断
	if(score>600)
	{
		cout << "恭喜考入一本大学" << endl;
		if (score > 700)
		{
			cout << "恭喜考入北大" << endl;
		}
		else if (score > 650)
		{
			cout << "恭喜考上清华" << endl;
		}
		else
		{
			cout << "恭喜考上人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "恭喜考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "恭喜考上三本" << endl;
	}
	else
	{
		cout << "继续努力" << endl;
	}




	
	system("pause");
	return 0;
}
