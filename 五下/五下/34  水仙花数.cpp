#include <iostream>
using namespace std;
//timeϵͳʱ��ͷ�ļ�����
#include <ctime>
#include <cmath>


int main5() {

	//1����ӡ������λ����

	//2���������������ҵ�ˮ�ɻ���
	int num = 100;

	do
	{
		//��������λ�����ҵ�ˮ�ɻ���
		int a = 0;//��λ
		int b = 0;//ʮλ
		int c = 0;//��λ

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;

		if ((pow(a,3) + pow(b,3) + pow(c,3))==num)//�����ˮ�ɻ������Ŵ�ӡ
		{

			cout << num << endl;
			
		}
		num++;
	} 
	

	while (num < 1000);




	system("pause");
	return 0;
}