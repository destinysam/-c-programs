int fib(int n)
{

     int i;
    if(n==1||n==2)
    return(1);
return(fib(n-1)+fib(n-2));
    }
int main()
{

    printf("%d ",fib(9));
    return 0;
}
