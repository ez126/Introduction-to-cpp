#include<iostream>
using namespace std;
#include <string>

//�ṹ��ָ��

//1������ѧ���ṹ��
struct student
{
	string name;//����

	int age;//����

	int score;//����
};

int main3() {

	//1������ѧ���ṹ�����	
	struct student s = { "����",18,100 };
	

	//2��ͨ��ָ��ָ��ṹ�����
	struct student* p = &s;//ǰ���struct����ʡ��

	//3��ͨ��ָ����ʽṹ������е�����
	//ͨ���ṹ��ָ�� ���ʽṹ���е����ԣ���Ҫ���á� -> ��

	cout << "����: " << p->name << " ���䣺" << p->age << " ������" << p->score << endl;

	system("pause");
	return 0;
}
