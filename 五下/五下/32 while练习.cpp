#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>


int main3() {

	//������������ �������õ�ǰϵͳʱ���������������ֹÿ���������ͬ 
	srand((unsigned int)time(NULL));


	//1��ϵͳ���������
	int num = rand() % 100 + 1;  //rand()%100���� 0 ~ 99�����
		//cout << num << endl;
	//2����ҽ��в²�
		int val = 0;//������������
		int a = 5;
		while (a>0)//�������Ϊ��������Ϸ����Ϊ5��
		{
			cin >> val;

			//3���ж���ҵĲ²�
			if (val > num)
			{
				cout << "�²����" << endl;
			}
			else if (val < num)
			{
				cout << "�²��С" << endl;
			}
			else
			{
				cout << "��ϲ���¶���" << endl;//�¶�  �˳���Ϸ
				break;//break��������������˳���ǰѭ��
			}
			--a;//���Ҫ��while��������
		}
		

	
	//�´�  ��ʾ�µĽ�� ������߹�С ���·��ص�2��


	system("pause");
	return 0;
}