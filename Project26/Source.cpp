//header file
#include <stdio.h>

//main funtion
int main()
{
	//defined variable

	
	struct Student
	{
		char name[20];
		char gender[20];
		int age;
	}student1;

	
	printf("1.你的名字\n");
	scanf_s("%s", &student1.name, 20);
	printf("2.你的性别\n");
	scanf_s("%s", &student1.gender, 20);
	printf("3.你的年龄\n");
	scanf_s("%d", &student1.age);

	printf("\n录入成功");
	printf("\n学生档案\n");
	printf("姓名：%s\n", student1.name);
	printf("性别：%s\n", student1.gender);
	printf("年龄：%d\n", student1.age);

	return 0;
}