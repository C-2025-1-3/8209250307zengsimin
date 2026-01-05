#include<iostream>
using namespace std;
class Box
{
public:
	double length;
	double width;
	double height;
	void input()
	{
		cout << "请输入长方柱的长宽高：";
		cin >> length >> width >> height;
	}
	void showVolume()
	{
		int Volume;
		Volume = length * width * height;
		cout << "体积：" << Volume << endl;
	}
};
int main()
{
	Box box1, box2, box3;
	cout << "第一个长方柱：" << endl;
	box1.input();
	box1.showVolume();
	cout << "第二个长方柱：" << endl;
	box2.input();
	box2.showVolume();
	cout << "第三个长方柱：" << endl;
	box3.input();
	box3.showVolume();
	return 0;
}