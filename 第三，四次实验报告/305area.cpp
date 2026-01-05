#include<iostream>
using namespace std;
int peachcount(int day)
{
	if (day == 10)
	{
		return 1;
	}
	else {
		return 2 * (peachcount(day + 1) + 1);
	}
}
int main()
{
	cout <<"第一天一共摘了" <<peachcount(1)<<"个桃子" << endl;
	return 0;
}