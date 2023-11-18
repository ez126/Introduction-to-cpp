#include <iostream>
using namespace std;
int main1() {

	//switch语句
	//给一个电影打分
	// 10 ~9  经典
	// 8 ~ 7  非常好
	// 6 ~ 5  一般
	//5分以下   烂片

	//1、提示用户给电影评分
	cout << "请给电影打分" << endl;
	//2、用户开始打分
	int score = 0;
	cin >> score;
	cout << "分数为： " << score << endl;
	//3、依据用户输入的分数来提示用户最后的结果

	switch (score)
	{
	case 10:
		cout << "你认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "你认为是经典电影" << endl;
		break;
	case 8:
		cout << "你认为电影非常好" << endl;
		break;
	case 7:
		cout << "你认为电影非常好" << endl;
		break;
	case 6:
		cout << "你认为电影一般" << endl;
		break;
	case 5:
		cout << "你认为电影一般" << endl;
		break;
	default :
		cout << "你认为这是烂片" << endl;
		break;
	}
	//if和switch的区别？
	//switch 缺点，判断的语句只能是整型或者字符型，不可以是一个区间
	//switch 优点，结构清晰 效率高


	system("pause");
	return 0;
}