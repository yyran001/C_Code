#include <stdio.h>

//结构体可以让C语言创建新的类型出来
struct stu
{
	char name[20];
	int age;
	double score;
};

int main()
{

	struct stu s = { "YyRan",22,319.9 };
	printf("1: %s %d %lf\n", s.name, s.age, s.score);
	struct stu* ps = &s;
	printf("2: %s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}