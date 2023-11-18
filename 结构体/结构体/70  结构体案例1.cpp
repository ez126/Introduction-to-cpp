#include<iostream>
using namespace std;
#include <string>
#include <Ctime> //随机数种子要加这个开头



//学生的结构体
struct student
{
	string sName;//姓名
	//int age;//年龄
	int score;//分数
};

//老师的结构体
struct Teacher
{
	string tName;//姓名
	//int age;
	int id;
	struct student sArray[5];//学生数组
};


//给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len )
{

	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//通过循环给每名老师所带的学生赋值
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			//添加一个随机的分数
			int random = rand() % 81+20;//20~100之间的随机数
			tArray[i].sArray[j].score = random;
		}
		
	}
}

//打印所有信息
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师名字：" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\t学生姓名： " << tArray[i].sArray[j].sName;
			cout << " 学生分数：" << tArray[i].sArray[j].score << endl;

		}
	}
}





int main7() {


	//随机数种子
	srand((unsigned int)time(0)); //注意括号

	//3名老师的数组
	struct Teacher tArray[3];

	//通过函数给3名老师的信息赋值，并且给老师带的学生信息赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);

	allocateSpace(tArray, len);

	//打印所有老师及所带学生的信息
	printInfo(tArray, len);



	system("pause");
	return 0;
}
