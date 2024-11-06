#include <stdio.h>
int main()
{
 int test1, test2,test3,project;

 printf("enter test1 score: ");
 scanf("%d",&test1);
 printf("enter test2 score: ");
 scanf("%d",&test2);
 printf("enter test3 score: ");
 scanf("%d",&test3);
 printf("enter project  score: ");
 scanf("%d",&project);

 if(test1 >= 75 && test2 >= 75 && test3 >= 70 && project >=75)
 	{
		printf("eligable ");
	}
else
	{
		printf("not elegible");
	}
return 0;
}
