#include<iostream>
#include<iomanip>
using namespace std;
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}
void bubbleSort(double list[], int size)
{
	bool changed = true;
	do {
		changed = false;
		for(int j=0;j<size-1;j++)
			if (list[j] > list[j + 1])
			{
				swap( list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
void displaylist(const double list[], int size)
{
	cout << "排序结果为：";
	for (int i = 0; i < size; i++)
	{
		cout << setw(8) << list[i];
	}
	cout << endl;
}
int main()
{
	const int SIZE = 10;
	double num[SIZE];
	cout << "请输入十个双精度的数字:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		cin >> num[i];
	}
	bubbleSort(num, SIZE);
	cout << " ";
	displaylist(num, SIZE);
	return 0;
}