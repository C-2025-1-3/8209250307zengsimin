#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.14;
	double radius, height, volume;
	cin >> radius;
	cin >> height;
	volume = (1.0 / 3.0) * PI * radius * radius * height;
	cout << "圆锥的体积为" <<volume<< endl;
	return 0;
}