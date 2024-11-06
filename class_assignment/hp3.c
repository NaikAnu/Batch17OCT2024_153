/* find the sum of series 1+4-9+16-25+36
*/ 
#include <stdio.h>

int main()
{
	int n=6;
	int i;
	int sum=0;
	for(i=1;i<=n;i++)
		{
			int term =i*i;
			if(i%2==0)
				sum+=term;
			else
				sum-=term;
		}
	printf("sum of series:%d",sum);

	return 0;
}	
