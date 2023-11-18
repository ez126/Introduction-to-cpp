#include<iostream>
using namespace std;
#include <string>
#include <Ctime> //随机数种子要加这个开头



//武将的结构体
struct Heroes
{
	string hName;//姓名
	string sex;//性别
	int age;//年龄
};


//给武将赋值
//这里可以按照65集那样去定义结构体
void allocateSpace(struct Heroes hArray[], int len)
{
	string name5[5] = { "张飞","赵云","关羽","刘备","貂蝉" };
	string sex5[5] = { "男","男", "男", "男", "女" };
	int age[5] = { 23,22,20,25,18 };

	for (int i = 0; i < len; i++)
	{
		hArray[i].hName = name5[i];//武将的名字赋值
		hArray[i].age = age [i];//武将年龄赋值
		hArray[i].sex = sex5[i];//武将性别赋值

	}

}


//打印武将信息
void printInfo(struct Heroes hArray[], int len)
{
	for (int j = 0; j < len; j++)
	{
		cout << "武将姓名： " << hArray[j].hName;
		cout << "  武将年龄： " << hArray[j].age;
		cout << "  武将性别： " << hArray[j].sex;
		cout << endl;

	}
	cout << endl;
}

//武将信息按冒泡排序后打印

void  printRankInfo(struct Heroes hArray[], int len)
{
	//先按年龄进行一个冒泡排序
	for (int i = len-1; i > 0; i--)//每次比较次数减一，直到不需要比较
	{
		for (int j = 0; j <len-1; j++)//9个数，有八个是相邻的，所以循环八次就行了
			//这里j如果是9的话下面就会有arr[10]，程序就会乱码
		{
			while (hArray[j].age > hArray[j+1].age)
			{
				Heroes k = hArray[j];
				//注意这里是定义一个数组，
				// 这样才能进行结构体的整个交换，
				// 要不然只是结构体里的某项参数在交换  int k=  hArray[j].age  这样只是交换某一项
				hArray[j] = hArray[j + 1];
				hArray[j + 1] =  k;
			}
		}
	}
	for (int a = 0; a < len; a++)
	{
		cout << "武将姓名： " << hArray[a].hName;
		cout << "  武将年龄： " << hArray[a].age;
		cout << "  武将性别： " << hArray[a].sex;
		cout << endl;

	}
}



int main() {



	//创建结构体数组
	struct Heroes hArray[5];
	int len = sizeof(hArray) / sizeof(hArray[0]);
	allocateSpace(hArray, len); //输入信息

	cout << "未排序的数组为：" << endl;
	printInfo(hArray, len); //打印信息

	cout << "按年龄进行冒泡排序之后的数组为：" << endl;

	printRankInfo(hArray, len);//打印排序之后的数组



	system("pause");
	return 0;
}
