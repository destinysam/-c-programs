int fib(int n)
{

    if(n==1||n==2)
        return(1);
    else
        return(fib(n-1)+fib(n-2));

}
int main()
{
    int i;
    for(i=1;i<=9;i++)


    printf("%d  ",fib(i));
    return 0;
}
