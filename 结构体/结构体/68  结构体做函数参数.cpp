#include<iostream>
using namespace std;
#include <string>

//����ѧ���ṹ��
struct student
{
	string name;//����
	int age;//����
	int score;//����
};
//��ӡѧ����Ϣ�ĺ���
//1��ֵ����
void printStudent1(struct student s)
{
	s.age = 100;
	cout << "�Ӻ����� ������" << s.name << " ���䣺 " << s.age << " ����: " << s.score << endl;
 }

//2����ַ����
void printStudent2(struct student* p)
{
	p->age = 200;
	cout << "�Ӻ���2�� ������" << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

}

int main5() {

	//�ṹ���������Ĳ���
	//��ѧ�����뵽һ�������У���ӡѧ�����ϵ�������Ϣ

	//����һ���ṹ�����
	struct student s;
	s.name = "����";
	s.age = 18;
	s.score = 90;

	//printStudent1(s);
	printStudent2(&s);
	 cout << "��main�����д�ӡ ������ " << s.name << " ����: " << s.age << " ����: " << s.score << endl;

	system("pause");
	return 0;
}
