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

	
	printf("1.�������\n");
	scanf_s("%s", &student1.name, 20);
	printf("2.����Ա�\n");
	scanf_s("%s", &student1.gender, 20);
	printf("3.�������\n");
	scanf_s("%d", &student1.age);

	printf("\n¼��ɹ�");
	printf("\nѧ������\n");
	printf("������%s\n", student1.name);
	printf("�Ա�%s\n", student1.gender);
	printf("���䣺%d\n", student1.age);

	return 0;
}