#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i=123;
	short s=98;
	bool b=true;
	char c='Y';
	float d=235.789;

	printf("s + i=%d\n",s + i);
	printf("i * d=%.2f\n",i*d);
	printf("c =c + b:%c\n",c+d);
	printf("d= d +c:%.2f\n",d+c);
	printf("b-d=%d\n",b-d);

	return 0;
}	

