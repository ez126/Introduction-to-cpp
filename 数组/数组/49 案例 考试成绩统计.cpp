#include <iostream>
using namespace std;
#include <string>
int main() {

	//������������
	int score[3][3] =
	{
		{100,100,100},
		{90, 50, 100},
		{60, 70, 80 }
	};

	string names[3] = { "����","����","����" };//������һ���ַ���

	//ͳ��ÿ���˵ķ����ܺ�
	for (int i = 0; i < 3; i++)
	{
		int a = 0; //ͳ�Ʒ����ܺ͵ı���
		for (int j = 0; j < 3; j++)
		{
			a = score[i][j] + a; //�����ø�ֵ����� a+=score[i][j]
		}
		cout << names[i]<<"���ܳɼ�Ϊ��" << a<< endl;
	}

	system("pause");
	return 0;
}