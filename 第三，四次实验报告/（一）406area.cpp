#include<iostream>
#include<cstring>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; ++i)
	{
		char ch = s[i];
		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
		{
			if (ch >= 'A' && ch <= 'Z')
			{
				ch=ch-'A'+'a';
			}
			counts[ch-'a']++;
		}
	}
}
int main()
{
	const int size = 26;
	int counts[size] = { 0 };
	char str[100];
	cout << "Enter a string:";
	cin.getline(str, sizeof(str));
	count(str, counts);
	for (int i = 0; i < 26; ++i)
	{
		if (counts[i] > 0)
		{
			cout << char('a' + i) << ":" << counts[i] <<" times"<< endl;
		}
	}
	return 0;
}