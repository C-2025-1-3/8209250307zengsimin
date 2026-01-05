#include<iostream>
using namespace std;
void calculateGcdAndLcm(int a, int b, int& gcd, int& lcm);
int main()
{
	int m,n;
	cout << "请输入自然数m:";
	cin >> m;
    cout << "请输入自然数n:";
	cin >> n;
int gcd, lcm;
calculateGcdAndLcm(m, n, gcd, lcm);
	cout << "最大公约数是：" << gcd << endl;
	cout << "最小公倍数是：" << lcm << endl;
	return 0;
}
void calculateGcdAndLcm(int a, int b, int& gcd, int& lcm)
{
	int originala = a;
	int originalb = b;
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	gcd = a;
	lcm = (originala * originalb) / gcd;
}
