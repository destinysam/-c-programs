void bin_search(int a[],int n,int s);
main()
{
    int arr[]={10,20,30,49,69,70,89};
    int s=89;
    bin_search(arr,7,s);

}
void bin_search(int a[],int n,int s)
{

    int l=0,m,u=n-1;
    while(l<=u)
    {

        m=(l+u)/2;
        if(s==a[m]){
            printf("number found at index %d",m);
        return;
        }
        else if(s>a[m])
            l=m+1;
        else
            u=m-1;
    }
            printf("no not found ");

}
