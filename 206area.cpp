#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cout << "请输入第一个正整数a:" ;
	cin >> a;
	cout << "请输入第二个正整数b:";
	cin >> b;
	if (a <= 0||b <= 0)
	{
		cout << "错误，请输入正整数！" << endl;
	}
	else {
		int originala = a;
		int originalb = b;
		while (b != 0)
		{
			int temp = b;
			b = a % b;
			a = temp;
		}
		int gcd = a;
		int lcm=(originala*originalb)/gcd;
		cout << "最大公约数" << gcd << endl;
		cout << "最小公倍数" << lcm << endl;
	}return 0;
}