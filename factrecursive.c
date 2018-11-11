#include<stdio.h>
int main()
{

    int fact;
    fact=factorial(5);
    printf("%d",fact);

}
int factorial(int a)
{

    int m;
    if(a==1)
        return(a);
    m=a*factorial(a-1);
    return(m);
}
