#include<Stdio.h>
    int stack[100],choice,n,top,x,i;
    void push(void);
    void pop(void);
    void display(void);
    int main()
    {
        top=-1;
        printf("\n enter  the size of stack max=[100] :");
        scanf("%d",&n);
        printf("\n\t stack operation usinr array");
        printf("\n\t--------------------------------");
        printf("\n\t 1.push \n\t2.pop\n\t3.display \n\t4.exit\n\t");
        do
        {
         printf("enter the choice\n");
         scanf("%d",&choice) ;
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
            printf("\n\texit point");
            break;
         default:
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

        printf("\n\t stack is over flow");

    }

else
    {

        printf(" enter a value to be pushed");
        scanf("%d",&x);
        top++;
        stack[top]=x;

    }

}
    void pop()
    {

        if(top>=n-1)
        {

            printf("\n\t stacks are under flow");

        }

    else
        {

            printf("\n\t the popped elements are %d\n",stack[top]);
            top--;

        }

    }
    void display()
    {

        if(top>=0)
        {

            printf("\n the elements in stack \n");
            for(i=top;i>=0;i--)
        printf("%d\n",stack[i]);
        printf("\n press next choice");
        }
        else
        {

            printf("\nthe stack is empty\n");

        }


    }




