#include<stdio.h>
int main()
{
	char choice;

	printf("enter your choice: ");
	scanf("%c",&choice);

	switch(choice)
	{
		case 'y':
		case 'Y':
			printf("yes");
			break;

		case 'n':
		case 'N':
			printf("no");
			break;
		default:
			printf("invalid character \n");
			return 1;//indicate error
	}
	return 0;
}	
