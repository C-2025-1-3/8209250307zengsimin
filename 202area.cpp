#include<iostream>
using namespace std;
int main()
{
	double x, y;
	cin >> x;
	if (x>0&&x<1)
	{
		y = 3 - 2 * x;
		cout << y << endl;
	}
	else
	{
		if (x<5&&x>=1)
		{
			y = 2 / (4 * x) + 1;
			cout << y << endl;
		}
		else
		{   
			
			if (x >= 5 && x < 10)
			{
				y = x * x;
				cout << y << endl;
			}
			else
			{
				cout << "´íÎó" << endl;
			}
		}
	}
	return 0;
}