int linear(int arr[],int n,int s)
{

    int temp=1,i;
    printf("enter the no to be search");
    scanf("%d",&s);
    for(i=0;i<=n-1;i++)
    {

        if(arr[i]==s)
        {
            printf("no found");
            temp=0;
            break;

        }

    }
if(temp==1)
    printf("no not found");
}
int main()
{

    int n,arr[5],i,s;
    printf("enter the elments");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
linear(arr,5,s);
}
