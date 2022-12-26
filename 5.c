/*5. Write a recursive function to print first N even natural numbers*/
#include<stdio.h>
 even(int n)
{
   if(n==0)
   return  ;
   else
    even(n-2);
   printf("%d ",n); 
   
   
}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    even(n);
}