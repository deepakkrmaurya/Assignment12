/*4. Write a recursive function to print first N odd natural numbers in reverse order*/
#include<stdio.h>
void   odd(int n)
{     int n1,i;
      if(n==0)
      return 0;
      
      i=0;
        
      odd();
       printf("%d ",n1);


}
int main()
{
    int n;
    printf("inter a number");
    scanf("%d",&n);
    odd(n);

}