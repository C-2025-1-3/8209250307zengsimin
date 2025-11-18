#include<iostream>
using namespace std;
int main()
{
	char ch;
	cin >> ch;
	if (ch >= 'a' && ch <= 'z')
	{
	char upperch = ch - 32;
	cout << upperch << endl;
    }
	else
	{
		int nextAscii = ch + 1;
		cout  << nextAscii << endl;
	}
	return 0;
}