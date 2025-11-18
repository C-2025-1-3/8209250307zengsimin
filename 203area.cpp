#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		int perimeter = a + b + c;
		cout << "周长为" << perimeter << endl;
		if(a==b||b==c||a==c)
		{
			cout << "该三角形是等腰三角形" << endl;
		}
		else
		{
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else
	{
		cout << "不构成三角形" << endl;
	}
	return 0;
}