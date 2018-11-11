int fib(int n)
{
   if (fib(n==1||n==2))
    return(1);
   else
    fib(n-1)+fib(n-2);

}
#include<stdio.h>
int main()
{

    printf("%d",fib(6));
    return 0;

}
