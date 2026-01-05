#include<iostream>
using namespace std;
int main()
{  
	int numbers[10];
	int count = 0;
	cout << "Enter ten numbers:";
	for (int i = 0; i < 10;++i)
	{
		int num;
		cin >> num;
		bool isDuplicate = false;
		for (int j = 0; j < count; ++j)
		{
			if (numbers[j] == num)
			{
				isDuplicate = true;
				break;
			}
		}
		if (!isDuplicate)
		{
			numbers[count++] = num;
		}
	}
	cout << "The distinct numbers are:";
	for (int i = 0; i < count; ++i)
		{
			cout << " " << numbers[i];
		}
		return 0;
	}