/*1. Write a recursive function to print first N natural numbers*/
#include<stdio.h>
void natural(int n)
{
    if(n==0)
    return 0 ;
    natural(n-1);
    printf("%d ",n);
   


    
}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    natural(n);

}