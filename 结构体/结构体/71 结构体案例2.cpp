#include<iostream>
using namespace std;
#include <string>
#include <Ctime> //���������Ҫ�������ͷ



//�佫�Ľṹ��
struct Heroes
{
	string hName;//����
	string sex;//�Ա�
	int age;//����
};


//���佫��ֵ
//������԰���65������ȥ����ṹ��
void allocateSpace(struct Heroes hArray[], int len)
{
	string name5[5] = { "�ŷ�","����","����","����","����" };
	string sex5[5] = { "��","��", "��", "��", "Ů" };
	int age[5] = { 23,22,20,25,18 };

	for (int i = 0; i < len; i++)
	{
		hArray[i].hName = name5[i];//�佫�����ָ�ֵ
		hArray[i].age = age [i];//�佫���丳ֵ
		hArray[i].sex = sex5[i];//�佫�Ա�ֵ

	}

}


//��ӡ�佫��Ϣ
void printInfo(struct Heroes hArray[], int len)
{
	for (int j = 0; j < len; j++)
	{
		cout << "�佫������ " << hArray[j].hName;
		cout << "  �佫���䣺 " << hArray[j].age;
		cout << "  �佫�Ա� " << hArray[j].sex;
		cout << endl;

	}
	cout << endl;
}

//�佫��Ϣ��ð��������ӡ

void  printRankInfo(struct Heroes hArray[], int len)
{
	//�Ȱ��������һ��ð������
	for (int i = len-1; i > 0; i--)//ÿ�αȽϴ�����һ��ֱ������Ҫ�Ƚ�
	{
		for (int j = 0; j <len-1; j++)//9�������а˸������ڵģ�����ѭ���˴ξ�����
			//����j�����9�Ļ�����ͻ���arr[10]������ͻ�����
		{
			while (hArray[j].age > hArray[j+1].age)
			{
				Heroes k = hArray[j];
				//ע�������Ƕ���һ�����飬
				// �������ܽ��нṹ�������������
				// Ҫ��Ȼֻ�ǽṹ�����ĳ������ڽ���  int k=  hArray[j].age  ����ֻ�ǽ���ĳһ��
				hArray[j] = hArray[j + 1];
				hArray[j + 1] =  k;
			}
		}
	}
	for (int a = 0; a < len; a++)
	{
		cout << "�佫������ " << hArray[a].hName;
		cout << "  �佫���䣺 " << hArray[a].age;
		cout << "  �佫�Ա� " << hArray[a].sex;
		cout << endl;

	}
}



int main() {



	//�����ṹ������
	struct Heroes hArray[5];
	int len = sizeof(hArray) / sizeof(hArray[0]);
	allocateSpace(hArray, len); //������Ϣ

	cout << "δ���������Ϊ��" << endl;
	printInfo(hArray, len); //��ӡ��Ϣ

	cout << "���������ð������֮�������Ϊ��" << endl;

	printRankInfo(hArray, len);//��ӡ����֮�������



	system("pause");
	return 0;
}
