/*3. Write a recursive function to print first N odd natural numbers*/
#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    fact(n);
    printf("factorial=%d",fact(n));
}