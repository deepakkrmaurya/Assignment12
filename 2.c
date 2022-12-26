/*2. Write a recursive function to print first N natural numbers in reverse order*/
#include<stdio.h>
void natural(int n)
{
    if(n==0)
    return 0;
    printf("%d ",n);
    natural(n-1);
   


    
}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    natural(n);

}