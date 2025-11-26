#include<iostream>
using namespace std;
int main()
{
	double a;
	cout << "输入a:";
    cin >> a;
	if (a < 0)
	{
		cout << "错误，a不能小于0！！！" << endl;
	}
		double xn = a;
		double xn1;
		const double setprecision =1e-5;
		do {
			xn1 = 0.5 * (xn + a / xn);
			if (fabs(xn + 1 - xn) >= setprecision) {
				break;
			}
			xn = xn1;
		} while (true);
		cout << a << "的平方根：" << xn  << endl;
	return 0;
}