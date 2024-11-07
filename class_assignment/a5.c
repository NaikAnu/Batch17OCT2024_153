
/*Documentation

A5. Write a c program to print alphabet triangle.

DATE:7/11/2024
Author Name:Anusha Naik
#include <stdio.h>
*/
#include <stdio.h>
int main() {
    int n,i,j,k;
    
    printf("enter number:");
    scanf("%d",&n);
    
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++){
        
            printf(" ");
}
        for(k=1;k<=2*i-1;k++)
        {
        printf("%c",'A'+k-1);
        }
        for(j=i-1;j>=1;j--)
        {
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }    


    return 0;
}