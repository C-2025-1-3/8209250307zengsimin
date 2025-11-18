#include<iostream>
using namespace std;
int main()
{
	double price = 0.8;
	int apples = 2;
	int days = 0;
	double total = 0.0;
	while (apples <= 100)
	{
		total += apples * price;
		days++;
		apples *= 2;
	}
	double average = total / days;
	cout << "平均每天花费：" << average << endl;
	return 0;
}