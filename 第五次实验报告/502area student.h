//student.h
class Student//类声明
{
public://公用成员函数原型声明
	void display();
	void set_value(int a,const char na[],char c);
private:
	int num;
	char name[20];
	char sex;
};
