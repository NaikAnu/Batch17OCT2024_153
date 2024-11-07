/*Documentation

A4. rotate array every kth element

1 2 3 4 5 6 7 8 9

k= 3

3 2 1 6 5 4 9 8 7


DATE:7/11/2024
Author Name:Anusha Naik
*/
#include <stdio.h>
void rotate(int ar[],int ,int );
void reverse(int ar[],int ,int );

int main()
{
    int ar[9]={1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
    int n=sizeof(ar)/sizeof(ar[0]);
    int k=3;
    
    rotate(ar,n,k);
    
    printf("result:");
        for(int i=0;i<n;i++)
        {
            printf(" %d",ar[i]);
        }
        printf("\n");
        return 0;
       
        
}


void rotate(int ar[],int n,int k)
{
    for(int i=0;i<n;i+=k){
        int end=(i+k-1<n)?i+k-1:n-1;
        reverse(ar,i,end);
    }
}
   
   void reverse(int ar[],int start,int end)
    {
        while(start<end)
        {
        int temp =ar[start];
        ar[start]=ar[end];
        ar[end]=temp;
        start++;
        end--;
        }
}
   
   
   
   
   
   
   
   