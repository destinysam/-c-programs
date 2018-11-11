int insertion_sort(int arr[],int n)
{

    int i,j,temp;
    for(i=1;i<n;i++){
        temp=arr[i];


    for(j=i-1;j>=0&& temp<arr[j];j--)

        arr[j+1]=arr[j];
    arr[j+1]=temp;
}
}
int main()
{

    int i,arr[]={45,34,67,10,23,90,12,43,1};
    insertion_sort(arr,9);
    for(i=0;i<9;i++)
        printf("%d ",arr[i]);
    return 0;
}
