#include<stdio.h>
int main()
{

    int k;
    k=fun(6);
    printf("%d",k);

}
int fun(int a){
int s;
a=9;
while(a>=1)

        s=a+fun(a-1);
    return(s);


    }

