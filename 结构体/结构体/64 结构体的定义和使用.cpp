#include<iostream>
using namespace std;
#include <string>

//1������ѧ���������� ��ѧ�����������������䣬������
//�Զ����������ͣ�һЩ���ͼ�����ϳɵ�һ������
//�﷨ struct ���͵�����{ ��Ա�б� }
struct Student
{
	//��Ա�б�

	//����
	string name;

	//����
	int age;

	//����
	int score;

}s3;  //˳�㴴��һ���ṹ�����

// 2��ͨ��ѧ�����ʹ�������ѧ��
//2.1 struct Student s1
//2.2 struct Student s2 = {.....}
//2.3 �ڶ���ṹ��ʵ˳�㴴���ṹ�����



int main1() {

//2.1 struct Student s1

	//struct�ؼ��ֿ���ʡ�ԣ�ֻ���ڽṹ�崴����ʱ�򣩶����ʱ����
	struct Student s1;
	//��s1���Ը�ֵ��ͨ�� .���ʽṹ������е�����
	s1.name = "����";
	s1.age = 18;
	s1.score = 100;


	cout << "������ " << s1.name << "  ���䣺 " << s1.age << "  �ɼ��� " << s1.score << endl;

//2.2 struct Student s2 = {.....}
	struct Student s2 = { "����", 19, 80 };
	cout << "������ " << s2.name << "  ���䣺 " << s2.age << "  �ɼ��� " << s2.score << endl;

//2.3 �ڶ���ṹ��ʵ˳�㴴���ṹ�����

	s3 .name = "����";
	s3.age = 20;
	s3.score = 69;
	cout << "������ " << s3.name << "  ���䣺 " << s3.age << "  �ɼ��� " << s3.score << endl;

	system("pause");
	return 0;
}
