int insertion_sort(int arr[],int n)
{

    int i,j,temp;
    for(i=0;i<n;i++){
        temp=arr[i];
        for(j=i-1;j>=0&& temp<arr[j];j--)
            arr[j+1]=arr[j];
        arr[j+1]=temp;
    }
}
int main()
{

    int i,arr[]={32,45,12,56,1,5,78,33,21};
    insertion_sort(arr,9);
    for(i=0;i<9;i++)
        printf("%d ",arr[i]);
    return 0;
}
