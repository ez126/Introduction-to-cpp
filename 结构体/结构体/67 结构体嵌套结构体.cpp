#include<iostream>
using namespace std;
#include <string>

//定义学生结构体
struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};

//定义老师结构体
struct teacher
{
	int id;//教室编号
	string name;//教师姓名
	int age;//教师年龄
	struct student stu;//辅导的学生
	
};

int main4() {

	//结构体嵌套结构体
	//创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 45;
	t.stu.name = "小王";
	t.stu.score = 80;
	t.stu.age = 18;

	cout << "老师姓名：" << t.name << " 老师编号：" << t.id
		<< " 老师年龄：" << t.age << " 老师辅导学生姓名："
		<< t.stu.name << " 学生年龄：" << t.stu.age <<
		" 学生的分数：" << t.stu.score << endl;

	system("pause");
	return 0;
}
