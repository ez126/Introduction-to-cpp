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

//������ʦ�ṹ��
struct teacher
{
	int id;//���ұ��
	string name;//��ʦ����
	int age;//��ʦ����
	struct student stu;//������ѧ��
	
};

int main4() {

	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	teacher t;
	t.id = 10000;
	t.name = "����";
	t.age = 45;
	t.stu.name = "С��";
	t.stu.score = 80;
	t.stu.age = 18;

	cout << "��ʦ������" << t.name << " ��ʦ��ţ�" << t.id
		<< " ��ʦ���䣺" << t.age << " ��ʦ����ѧ��������"
		<< t.stu.name << " ѧ�����䣺" << t.stu.age <<
		" ѧ���ķ�����" << t.stu.score << endl;

	system("pause");
	return 0;
}
