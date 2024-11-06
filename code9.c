#include <stdio.h>

int main()
{
	int code;

	printf("enter the code: ");
	scanf("%d",&code);

	switch(code)
	{
		case 2:
			printf("software development");
			break;
		case 3:
			printf("senior software development");
			break;
		case 4:
			printf("team lead");
			break;

		case 5:
			printf("senior team lead");
			break;
		default:
			printf("inncorect code");
	}
	return 0;
}	
