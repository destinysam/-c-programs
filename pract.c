void bin_search(int a[],int n,int s);
main()
{

    int arr[]={10,20,30,45,56,67,89,90};
    int s=89;
    bin_search(arr,8,s);
}
void bin_search(int a[],int n,int s)
{
    int l=0,u=n-1,m;
    while(l<=u)
    {

        m=(l+u)/2;
        if(s==a[m])
        {
        printf("no found at index %d",m);
        return;
        }
        else if(s>a[m])
            l=m+1;
        else
            u=n-1;
    }
        printf("no not found");
}
