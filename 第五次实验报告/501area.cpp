#include<iostream>
using namespace std;
class Time//定义Time类
{
private://将数据成员改为私有的
	int hour;
	int minute;
	int sec;
public://再类体内定义成员函数
	//输入
	void SetTime()
	{
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	//输出
	void ShowTime()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.SetTime();
	t1.ShowTime();
	return 0;
}
