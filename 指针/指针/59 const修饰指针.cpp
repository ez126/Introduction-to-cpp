#include<iostream>
using namespace std;
int main5() {

	//��const�������ε�ָ�루*p�����ǳ���p��
	//����ʲô������ʲô

	//1��const����ָ��
	int a = 10;
	int b = 10;

	const int* p = &a;
	//ָ��ָ���ֵ�����Ըģ�ָ���ָ����Ը�
	//   *p = 20;
	p = &b;//��ȷ


	//2��const���γ���
	int* const p2 = &a;
	*p2 = 100;//��ȷ��
	// p2 = &b;  //����ָ���ָ�򲻿��Ը�

	//3��const����ָ��ͳ���

	const int* const p3 = &a;
	// *p3 = 100;//����
	// p3 = &b;//����


	system("pause");
	return 0;
}