/*10. Write a recursive function to print reverse of a given number*/
#include<stdio.h>
reverse(int n)
{
    if(n==0)
    return 0;
    printf("%d",n%10);
    reverse(n/10);
    ;
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    reverse(n);
    return 0;
}