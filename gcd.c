int gcd(int a,int b)
{
if(a==b)
return(a);
if(a%b==0)
return(b);
if(b%a==0)
return(a);
if(a>b)
return(gcd(a%b,b));
if(b>a)
return(gcd(a,b%a));
}
main()
{
printf("gcd is %d",gcd(105,91));
return 0;
}
