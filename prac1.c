#include<Stdio.h>
int stack[50],n,choice,i,x,top;
void push(void);
void pop(void);
void display(void);
int main()
{

    top=-1;
    printf("enter the no of elements:  ");
    scanf("%d",&n);
    printf("array elements in a stacks\n");
    printf("---------------------------\n");
    printf("\n\t 1.push\n\t 2.pop\n\t3.display\n\t4. exit\n");
    do
    {

        printf("enter the choice   ");
        scanf("%d ",&choice);
        switch(choice)
        {

        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exit point");
        default :
            printf("u entered wrong key");

        }
    }
    while(choice!=4);
    return 0;
    }
void push()
{
if(top>=n-1)
{

printf("the stack is overflow\n");
}
else
{

    printf("enter the elment to be pushed\n");
    scanf("%d",&x);
    top++;
    stack[top]=x;

}
}
void pop()
{

    if(top<=1)

{
printf("the stack is under flow");
}
else{
    printf("the popped element is ",stack[top]);
    top--;

}
}
void display()
{
    if(top>=0)
    {
    printf("entered  stack elements");
    for(i=top;i<=1;i++)
    scanf("%stack",stack[i]);
    printf("enter the next choice\n");

}
else
{

    printf("the stack is empty\n");

}
    }
