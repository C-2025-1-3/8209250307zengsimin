#include<iostream>
#include<string>
using namespace std;
int parseHex(string hexStr)
{
	int result=0;
	for (int i = 0; i < hexStr.length(); i++)
	{
		char ch = hexStr[i];
		int value;
		if (ch == '0')value = 0;
		else if (ch == '1')value = 1;
		else if (ch == '2')value = 2;
		else if (ch == '3')value = 3;
		else if (ch == '4')value = 4;
		else if (ch == '5')value = 5;
		else if (ch == '6')value = 6;
		else if (ch == '7')value = 7;
		else if (ch == '8')value = 8;
		else if (ch == '9')value = 9;
		else if (ch == 'A' || ch == 'a')value = 10;
		else if (ch == 'B' || ch == 'b')value = 11;
		else if (ch == 'C' || ch == 'c')value = 12;
		else if (ch == 'D' || ch == 'd')value = 13;
		else if (ch == 'E' || ch == 'e')value = 14;
		else if (ch == 'F' || ch == 'f')value = 15;
		else return -1;
		result = result * 16 +value;
	}
	return result;
}
int main()
{
	cout << "A5=" << parseHex("A5") << endl;
	return 0;
}
