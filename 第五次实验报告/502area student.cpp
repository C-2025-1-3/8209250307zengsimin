//student.cpp
#include<iostream>
#include<iomanip>
#include<cstring>
#include"student.h"
using namespace std;
void Student::display()//在类外定义display类函数
{
	cout << "num:" <<setw(3)<<setfill('0') << num << endl;
	cout << "name:" << name << endl;
	cout << "sex:" << sex << endl;
}
void Student::set_value(int a,const char na[], char c)
{
	num = a;
	strcpy_s (name, na);
	sex = c;
}
