#include<iostream>
using namespace std;
#include <string>

//�ṹ������
//1������ṹ��
struct student
{
	string name;//����

	int age;//����

	int score;//����
};


int main2() {

	//2�������ṹ������
	struct student stuArray[3]=
	{
		{"����",18,100},
		{"����",28,99},
		{"����",38,66}
	};
	//3�����ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	stuArray[2].age = 80;
	stuArray[2].score = 60;

	//4�������ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "������ " << stuArray[i].name;
		cout << " ���䣺 " << stuArray[i].age << " ������ " << stuArray[i].score;
		cout << endl;
	}

	system("pause");
	return 0;
}
