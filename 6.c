/*6. Write a recursive function to print first N even natural numbers in reverse order*/
#include<stdio.h>
 even(int n)
{
   if(n==0)
   return  ;
   else
    
   printf("%d ",n);
   even(n-2); 
   
   
}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    even(n);
}