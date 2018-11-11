int linear_search(int arr[],int n,int s)
{
    int i,temp=1;
    printf("enter the no to be searched");
    scanf("%d",&s);
    for(i=0;i<n;i++){
        if(arr[i]==s)
        {
            printf("number found");
            temp=0;
            break;

        }
    }

    if(temp==1)

            printf("number not found");



}
int main()
{

    int i,s;
    int arr[]={45,23,12,64,32};
     linear_search(arr,5,s);
}
