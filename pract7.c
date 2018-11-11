int insertion_sort(int arr[],int n)
{

    int i,j,temp;
    for(i=1;i<=9;i++){
        temp=arr[i];
    for(j=i-1;j>=0&&temp<arr[j];j--)
        arr[j+1]=arr[j];
        arr[j+1]=temp;


}
}
int main()
{

    int i,arr[]={34,54,12,67,89,11,32,90,55};
    insertion_sort(arr,9);
    for(i=0;i<9;i++)

        printf("%d ",arr[i]);
        return(0);
}
