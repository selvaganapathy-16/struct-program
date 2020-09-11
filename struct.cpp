#include<stdio.h>
struct details
{
	char name[30];
	int age;
	int pno;
	int salary;
}emp[21];
int main()
{
	int i;
	for(i=1;i<21;i++)
	{
		printf("employee detail %d\n",i);
		printf("enter the name\n");
		scanf("%s",emp[i].name);
		printf("enter age\n");
		scanf("%d",&emp[i].age);
		printf("enter phone number\n");
		scanf("%d",&emp[i].pno);
		printf("enter salary\n");
		scanf("%d",&emp[i].salary);
	}
	printf("employee details are.....\n\n");
	printf("name\tage\tphone number\tsalary\n");
	for(i=1;i<21;i++)
	{
		printf("%s\t%d\t%d\t%d\n",emp[i].name,emp[i].age,emp[i].pno,emp[i].salary);
	}
	return 0;
}
