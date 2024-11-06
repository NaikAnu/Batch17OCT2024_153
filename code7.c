#include <stdio.h>

int main()
{
	int decimal_num;

	printf("enter the decimal number: ");
	scanf("%d",&decimal_num);

	if(decimal_num >= 0 && decimal_num <=127)
		{
			printf("hexadecimal equivallent: %02x\n",decimal_num);
		}
	else
		{
			printf("invalid output");
		}
	return 0;
}	
