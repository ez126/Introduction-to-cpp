#include<iostream>
using namespace std;
#include <string>
#include <Ctime> //���������Ҫ�������ͷ



//ѧ���Ľṹ��
struct student
{
	string sName;//����
	//int age;//����
	int score;//����
};

//��ʦ�Ľṹ��
struct Teacher
{
	string tName;//����
	//int age;
	int id;
	struct student sArray[5];//ѧ������
};


//����ʦ��ѧ����ֵ�ĺ���
void allocateSpace(struct Teacher tArray[],int len )
{

	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].tName = "Teacher_";
		tArray[i].tName += nameSeed[i];

		//ͨ��ѭ����ÿ����ʦ������ѧ����ֵ
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].sName = "Student_";
			tArray[i].sArray[j].sName += nameSeed[j];
			//���һ������ķ���
			int random = rand() % 81+20;//20~100֮��������
			tArray[i].sArray[j].score = random;
		}
		
	}
}

//��ӡ������Ϣ
void printInfo(struct Teacher tArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "��ʦ���֣�" << tArray[i].tName << endl;

		for (int j = 0; j < 5; j++)
		{
			cout << "\tѧ�������� " << tArray[i].sArray[j].sName;
			cout << " ѧ��������" << tArray[i].sArray[j].score << endl;

		}
	}
}





int main7() {


	//���������
	srand((unsigned int)time(0)); //ע������

	//3����ʦ������
	struct Teacher tArray[3];

	//ͨ��������3����ʦ����Ϣ��ֵ�����Ҹ���ʦ����ѧ����Ϣ��ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);

	allocateSpace(tArray, len);

	//��ӡ������ʦ������ѧ������Ϣ
	printInfo(tArray, len);



	system("pause");
	return 0;
}
