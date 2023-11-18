#include <iostream>
using namespace std;
int main5() {
	int arr[] = { 2,3,4,5,6,7,8,9};
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	int i = 0;
	

	cout << "原数组数据为：";
	for (int a = 0; a < end+1; a++)
	{
		cout << arr[a];
	}
	cout << endl;
	cout << "逆转后的数组数据为：";
	if (end % 2 == 0)
	{
		for (int start=0; start < (end / 2); start++)
		{
			
			i = arr[start];//注意这一串是不能用arr[i]的，及不能是 arr[i] = arr[start]
			//因为如果是arr[i]，i=0，就是arr[0]=arr[0]
			arr[start] = arr[end-start];
			arr[end-start] = i;

		}
		
	}
	else
	{
		for (int start = 0; start < ((end+1) / 2); start++)
		{

			i = arr[start];//注意这一串是不能用arr[i]的，及不能是 arr[i] = arr[start]
			//因为如果是arr[i]，i=0，就是arr[0]=arr[0]
			arr[start] = arr[end - start];
			arr[end - start] = i;

		}
	}
	for (int k = 0; k < end + 1; k++)
	{
		cout << arr[k];
	}
	cout << endl;





	system("pause");
	return 0;
}