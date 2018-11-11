#include<stdio.h>
int main()
{
int a[3][3];
int b[3][3];
int c[3][3];
int i,j;
printf("enter the matrix of A");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);

    }
}
printf("\n");
printf("enter the matrix B");
for(i=0;i<3;i++){
      for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);

    }
}
printf("\n");
printf("the required matrix is\n");
multiply(a,b,c);
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",c[i][j]);

    }
printf("\n");
}
}

int multiply(int a[3][3],int b[3][3],int c[3][3])
{
     int k,i,j;
    for(i=0;i<3;i++)
    {

        for(j=0;j<3;j++)
        {

            c[i][j]=0;
            for(k=0;k<3;k++){
                c[i][j]+=a[i][k]*b[j][k];

            }
        }
    }


}
