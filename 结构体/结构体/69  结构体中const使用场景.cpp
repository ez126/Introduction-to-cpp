#include<iostream>
using namespace std;
#include <string>

//comst��ʹ�ó���

struct student
{
	string name;//����
	int age;//����
	int score;//����
};
//�������е��βθ�Ϊָ�룬���Լ����ڴ�ռ䣬���Ҳ��Ḵ��һ���µĸ�������
void printStudents(student* s)
{
	s->age = 100;
	cout << "������" << s->name << " ���䣺" << s->age << " ������" << s->score << endl;
}


int main6() {

	//�����ṹ�����
	struct student s = { "����",15,70 };
	

	//ͨ��������ӡ�ṹ���������Ϣ

	printStudents(&s);
	cout << "main������������Ϊ�� " << s.age << endl;

	system("pause");
	return 0;
}
