#include <iostream>
using namespace std;
#include <string>

int main4() {
	

	//¸³ÖµÔËËã·û

	//=
	int a = 10;
	a = 100;
	cout << "a=" << a << endl;

	//+=
		a = 10;
		a += 2;//a=a+2
		cout << "a=" << a << endl;//12


	//-=
		a = 10;
		a -= 2;//a=a-2
		cout << "a=" << a << endl;//8

	//*=
		a = 10;
		a *= 2;// a = a * 2
		cout << "a=" << a << endl;//20

	//  /=
		a = 10;
		a /= 2;// a = a / 2
		cout << "a=" << a << endl;//5


	//  %=
		a = 10;
		a %= 3; // a = a % 3
		cout << "a=" << a << endl;//1

	system("pause");
	return 0;
}