/*8. Write a recursive function to print binary of a given decimal number*/
#include<stdio.h>
void binary(int n)
{
    if(n==0)
    return 0;
    binary(n/2);
    printf("%d",n%2);
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    binary(n);
    return 0;
}