#include<iostream>
using namespace std;

int main5() {
	//����ȡ������������һ��

	//1����������
	int a = 0;
	int b = 0;
	int c = 0;

	//2���������
	cout << "��ֱ�����a��b��c��ֵ" << endl;
	cin >> a;
	cout << "a=" <<a<< endl;
	cin >> b;
	cout << "b=" <<b<< endl;
	cin >> c;
	cout << "c=" <<c<< endl;

	//3�����бȽ�
	if (a > b)
	{
		if(a>c)
		{
			cout << "���ֵΪa=" <<a<< endl;
		}
		else
		{
			cout << "���ֵΪc=" << c << endl;
		}
	}
	else
	{
		if (b > c)
		{
			cout << "���ֵΪb=" <<b<<endl;
		}
		else
		{
			cout << "���ֵΪc=" <<c<< endl;
		}
	}





	system("pause");
	return 0;
}