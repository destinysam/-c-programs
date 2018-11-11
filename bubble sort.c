int bubble_sort(int arr[],int n)
{
       int i,j;
    for(i=0;i<8;i++)
    {

        for(j=8;j>i;j--)
        {

            if(arr[j]<arr[j-1])
            {

                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
        }
    }
}
 int main()
{

    int arr[]={4,34,65,2,1,54,23,25};
    int n,i;
    bubble_sort(arr,n);
    for(i=0;i<8;i++)
        printf("%d    ",arr[i]);
    return 0;
}
