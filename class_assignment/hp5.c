/* write the logic for increment square number 5 */

#include <stdio.h>

int main()
{
int N;
 printf("\n enter the value of n: ");
 scanf("%d",&N);

 int num=1;

 for(int i=1;i<=N;i++)
 {
 	for(int j=1;j<=N;j++){
	printf("%d",num);
	num++;

	if (j<N)
		printf("");
	}
	printf("\n");
}
return 0;
}


