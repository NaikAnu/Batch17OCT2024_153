#include <stdio.h>
int main()
{
	int n,i,j,fact,sum=0;
	printf("\n enter the n:");

	scanf("%d",&n);

		i=1;

		while(i<=n)
		{
			fact=1;
			j=1;
			while(j<=i)
				{
					fact *= j;
					j++;
				}
				sum +=fact;
				i++;
		}
		printf("sum of factorial  %d: %d\n",n,sum);
				
	return 0;
}


