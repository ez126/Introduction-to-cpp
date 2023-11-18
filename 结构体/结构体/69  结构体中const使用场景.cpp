#include<iostream>
using namespace std;
#include <string>

//comst的使用场景

struct student
{
	string name;//姓名
	int age;//年龄
	int score;//分数
};
//将函数中的形参改为指针，可以减少内存空间，而且不会复制一个新的副本出来
void printStudents(student* s)
{
	s->age = 100;
	cout << "姓名：" << s->name << " 年龄：" << s->age << " 分数：" << s->score << endl;
}


int main6() {

	//创建结构体变量
	struct student s = { "张三",15,70 };
	

	//通过函数打印结构体变量的信息

	printStudents(&s);
	cout << "main中张三的年龄为： " << s.age << endl;

	system("pause");
	return 0;
}
