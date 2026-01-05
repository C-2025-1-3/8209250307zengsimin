#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point():x(60),y(80){}
	void setPoint(int i, int j)
	{
		x = 60 + i;
		y = 80 + j;
	}
	void display()
	{
		cout << "坐标值:(" << x << "," << y << ")"<<endl;
	}
};
int main()
{
	Point p1;
	cout << "初始坐标：" << endl;
	p1.display();
	cout << "修改后坐标" << endl;
	p1.setPoint(5, 8);
	p1.display();
	return 0;
}