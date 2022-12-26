/*7. Write a recursive function to print squares of first N natural numbers*/
#include<stdio.h>
void square(int n)
{
    if(n==0)
    return ;
    else
    square(n-1);
     printf("%d ",n*n);
}
int main()
{
int n;
printf("inter the number");
scanf("%d",&n);
square(n);
}