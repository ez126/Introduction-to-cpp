#include <iostream>
using namespace std;
int main1() {

	//switch���
	//��һ����Ӱ���
	// 10 ~9  ����
	// 8 ~ 7  �ǳ���
	// 6 ~ 5  һ��
	//5������   ��Ƭ

	//1����ʾ�û�����Ӱ����
	cout << "�����Ӱ���" << endl;
	//2���û���ʼ���
	int score = 0;
	cin >> score;
	cout << "����Ϊ�� " << score << endl;
	//3�������û�����ķ�������ʾ�û����Ľ��

	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	case 5:
		cout << "����Ϊ��Ӱһ��" << endl;
		break;
	default :
		cout << "����Ϊ������Ƭ" << endl;
		break;
	}
	//if��switch������
	//switch ȱ�㣬�жϵ����ֻ�������ͻ����ַ��ͣ���������һ������
	//switch �ŵ㣬�ṹ���� Ч�ʸ�


	system("pause");
	return 0;
}