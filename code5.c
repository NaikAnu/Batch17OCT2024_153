#include <stdio.h>

int main()
{
	char username[126];
	int age;
	float salary;
	short designation_code;
	char gender;

	printf("\n enter the username");
	scanf("%s",username);

	printf("\nenter age: ");
	scanf("%d", &age);

	printf("\nenter salary:");
	scanf("%f",&salary);

	printf("\nenter the designation code:");
	scanf("%hd",&designation_code);

	printf("\nenter the gender");
	scanf(" ");
	scanf("%c",&gender);

	printf("\nusername :%s",username);
	printf("\nage: %d",age);
	printf("\nsalary: %.2f",salary);
	printf("\ndesignation code: %hd",designation_code);
	printf("\ngender:%c",gender);

	return 0;
}

