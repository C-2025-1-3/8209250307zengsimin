#include<iostream>
#include<cmath>
#include"mytriangle.h"
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的三条边长：";
	cin >> a >> b >> c;
	if (is_valid(a, b, c))
	{
		double area = triangle_area(a, b, c);
		cout << "三角形的面积是：" << area << endl;
	}
	else {
		cout << "错误：这三条边不构成三角形！！！" << endl;
	}
	return 0;
}