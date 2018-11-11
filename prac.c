int fab(int n)
{
if(n==1||n==2)
return(1);
return(fab(n-1)+fab(n-2));
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
printf("%d\t",fab(i));
return 0;
}
