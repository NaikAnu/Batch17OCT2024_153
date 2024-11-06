#include <stdio.h>

int main()
{
	int k;
	const int num=0;

	for(k=0;k<9;k++)
	{
		k=k + 1;
		printf("final value of k:%d\n",k);
	}
	printf("value of num:%d\n",num);

	return 0;
}	
