#include<stdio.h>
int main()
{
char name[23],i;
printf("enter the text");
for(i=0;i<23;i++){
scanf("%c",&name[i]);
}
for(i=0;i<23;i++)
printf("%c",name[i]);
return 0;
}
