#include<stdio.h>
#define size 5
int cq[size],front=-1,rear=-1;
int isFull()
{
    if((front==rear+1)||(front==0 && rear==size-1))
        return 1;
    return 0;
}

int isEmpty()
{
    if(front==-1 && rear==-1)
        return 1;
    return 0;
}

void insert()
{
    int ele;
    if(isFull())
        printf("Queue is Full.\n");
    else
    {
        if(front==-1)
            front=0;
        printf("Enter the element to be inserted in the circular Queue.\n");
        scanf("%d",&ele);
        rear+=1;
        cq[rear]=ele;
        printf("Inserted Element %d \n",ele);
    }
}

void deletes()
{
    int ele;
    if(isEmpty())
        printf("The queue is empty.Nothing to delete.\n");
    else
    {
        ele=cq[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front+=1;
        }
        printf("The deleted element is %d \n",ele);
    }
}

void traverse()
{
    int i=0;
    if(isEmpty())
       {
           printf("Nothing to traverse. The queue is empty.\n");
       }
    else
    {
        for(i=front;i<size-1;i++)
        {
            if(cq[i]!=0)
                printf("%d\n",cq[i]);
        }
    }
}

void main()
{
    char c='y';
    int ch;
    while(c=='y'){
    printf("Welcome to the operations on circular queue.\n");
    printf("Choose>>>\n");
    printf("1.Insert \n");
    printf("2.Deletes \n");
    printf("3.Traverse \n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            {
            insert();
            break;
            }
        case 2:
            {
                deletes();
                break;
            }
        case 3:
            {
               traverse();
               break;
            }
        default:
            {
                printf("Enter y for continuing and any other key to discontinue..\n");
                scanf("%c",&c);
                break;
            }
    }}
}
