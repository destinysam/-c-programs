#include<stdio.h>
int main()
{

    printf("the fib is %d",fib(8));
    return 0;
}
int fib(int n)
{

    if(n==1||n==2)
        return(1);
        else
        return(fib(n-1)+fib(n-2));

}
