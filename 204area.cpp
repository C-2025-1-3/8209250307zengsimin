#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	char op;
	cout << "请输入第一个数字：" << endl;
	cin >> num1;
	cout << "输入运算符：" << endl;
	cin >> op;
	cout << "请输入第二个数字：" << endl;
	cin >> num2;
	if (op == '+')
	{
		cout << "结果是：" << num1+num2 << endl;
	}
	else if (op == '-')
	{
		cout << "结果是：" << num1-num2 << endl;
	}
	else if (op == '*')
	{
		cout << "结果是：" << num1*num2 << endl;
	}
	else if (op == '/')
	{
		if (num2 == 0)
		{
			cout << "错误" << endl;
		}else
		{ 
			cout << "结果是：" << num1 / num2 << endl;
		}
	}
	else {
		cout << "错误" << endl;
	}
	return 0;
}