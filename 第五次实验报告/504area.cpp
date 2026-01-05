#include<iostream>
#include<cstring>
using namespace std;
class Student
{
public:
	string studentnumber;//学号
	int score;//成绩
	Student(string i="",int s=0):studentnumber(i),score(s){}//构造函数
};
void max(Student* p, int n)
{
	Student* maxStudent = p;
	//遍历所有学生，找出成绩最高者
	for (int i = 1; i < n; i++)
	{
		if ((p + i)->score > maxStudent->score)
		{
			maxStudent = p + i;
        }
	}
	cout << "最高成绩者" << endl;
	cout << "学号：" << maxStudent->studentnumber << endl;
}
int main()
{
	Student students[5] = {
		Student("202501",85),
		Student("202502",92),
		Student("202503",88),
		Student("202504",100),
		Student("202505",90),
	};
	max(students, 5);
	return 0;
}