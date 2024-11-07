/*Documentation

A1. Check whether a given number can be expressed as the sum of two prime number

i/p
Enter a positive integer: 34
Output
34 = 3 + 31

34 = 5 + 29
34 = 11 + 23
34 = 17 + 17
NoofWays = 4

NoofWays=-1

DATE:7/11/2024
AUTHOR NAME:ANUSHA NAIK
*/

#include <stdio.h>
int prime(int);

int main() {
    int n,counter,i=0;
    printf("enter the number:");
    scanf("%d",&n);
    for (int i=2;i<=n/2;i++)
        {
            if(prime(i)&&prime(n-i))
                {
                    printf("\n%d=%d+%d",n,i,n-i);
                    counter++;
                }
        }
        
        
        if(counter>0)
            printf("\nnoofways=%d",counter);
        else
            printf("noofways=-1\n");
            
        return 0;
        
        
}


int prime(int num)
{
    int i;
    if(num<=1)
        return 0;
    for(i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
return 1;
}
