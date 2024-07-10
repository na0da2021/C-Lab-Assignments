#include <stdio.h>
#include <stdlib.h>
void perfect(int);
int main()
{
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    perfect(x);
    return 0;
}


void perfect(int x)
{
    int rem;
    rem=0;
    int i;
for(i=1;i<x;i++)
 {
     if(x%i==0 )
     {
         printf("devided by %d \n\n",i);
         rem+=i;
     }
 }

 if(rem==x)
 {
     printf("perfect num\n\n");
 }
 else
 {
     printf("not perfect\n\n");
 }
}
