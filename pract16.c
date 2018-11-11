int bin_search(int arr[],int n,int s)
{

    int l=0,u=n-1,m;
    while(l<=u)
    {

        m=(u+l)/2;
        if(arr[m]==s)
            printf("number found at index %d",m);
        return 0 ;
    }

    if(s>arr[m])
        l=m+1;

    else
        u=m-1;

    printf("number found");

}
int main()
{

    int  n,s,arr[]={23,34,56,78,88,90,92,96};
    s=96;
    bin_search(arr,n,s);
}
