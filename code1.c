#include <stdio.h>
#include <string.h>

void readdisplay()
{
	char ch;
	int i;
	char str[80];
	short s;
	float f;

	printf("enter the character: ");
	scanf("%c",&ch);
	printf("character: %c\n",ch);

	printf("enter an string :");
	scanf("%s",str);
	printf("string: %s\n",str);

	printf("enter an integer: ");
	scanf("%d",&i);
	printf("integer: %d",i);

	printf("enter a short integer: ");
	scanf("%hd",&s);
	printf("short integer :%hd",s);

	printf("enter a float : ");
	scanf("%f",&f);
	printf("float:%f",f);

}

void readdisplay2(){
	char ch;
	int i;
	char str[80];
	short s;
	float f;


	printf("enter character,integer,string,short integer ,and float:");
	scanf("%c %d %s %hd %f",&ch,&i,str,&s,&f);
	
	printf("character:%c",ch);
	printf("integer:%d",i);
	printf("string %s",str);
	printf("short integer %hd",s);
	printf("float %f",f);
}
int main()
{
	readdisplay();
	readdisplay2();

	printf("string in upper case: %s",strupr(str));
	printf("size of char:%zu",sizeof(char));
	printf("size of int:%zu",sizeof(int));
	printf("size of short:%zu",sizeof(short));
	printf("size of float:%zu",sizeof(float));
	printf("size of str:%zu",sizeof(str));

return 0;
}
	
