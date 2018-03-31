#include<stdio.h>
#define size 5
int st[size],ele,top=-1;

void push(int ele)
{
    int ele1=ele;
    if(isFull())
    {
        printf("The stack is Full so the element cannot be inserted.\n");
    }
    else
    {
        top+=1;
        st[top]=ele1;
        printf("The element %d is inserted successfully. \n",ele1);
    }
}

void pop()
{
    int k;
    if(isEmpty())
    {
        printf("Stack empty. Can't Pop.\n");
    }
    else
    {
        k=st[top];
        printf("The element %d is popped Successfully. \n",k);
        top-=1;
    }
}

int isFull()
{
    if(top==size-1)
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void peek()
{
    if(isEmpty())
        printf("The Stack is Empty and can't be peeked.\n");
    else
        printf("%d",st[top]);
}

void traverse()
{
    int top1=top;
    if(isEmpty())
    {
        printf("The stack is empty and can't be traversed.\n");
    }
    else
    {
        while(st[top1]!='\0')
        {
            printf("%d \n",st[top1]);
            top1-=1;
        }

    }

}

void main()
{
    int ch,i,k=1;
    while(k==1)
    {
        printf("This program is for stack. Enter your choice of operation. \n");
        printf("1.Push \n");
        printf("2.Pop \n");
        printf("3.Traverse \n");
        printf("4.Peek \n");
        printf("5.Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
        case 1:
            {

                printf("Enter the element to be pushed: \n");
                scanf("%d",&ele);
                push(ele);
                break;
            }
        case 2:
            {

                pop();
                break;
            }
        case 3:
            {

                traverse();
                break;
            }
        case 4:
            {

                peek();
                break;
            }
        case 5:
            {
                printf("If you want to exit Press 0 otherwise 1. \n");
                scanf("%d",&k);
                break;
            }
        default:
            {
                printf("Invalid Option Entered.\n");
            }
        }
    }
}


