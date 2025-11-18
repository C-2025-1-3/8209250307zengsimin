#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double fahrenheit, celsius;
	cin >> fahrenheit;
	celsius = (fahrenheit - 32) * 5.0 / 9.0;
	cout << fixed << setprecision(2);
	cout << "ÉãÊÏÎÂ¶ÈÎª" << celsius << endl;
	return 0;
}