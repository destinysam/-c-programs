#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
FILE *fp;
char ch[100];
fp=fopen("hyder.txt","w");
if(fp==NULL)
{
printf("file does not exist");
exit(1);
}
int i;
printf("enter the characters\n");
gets(ch);
for(i=0;i<strlen(ch);i++)
{
fputc(ch[i],fp);
}
fclose(fp);
return 0;
}
