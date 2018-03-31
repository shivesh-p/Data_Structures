#include<stdio.h>
void insert();
void deletes();
void traverse();
int size=5;
int q[5],front=0,rear=0;
void main()
{
    int ch,k=1;
    while(k==1){
    printf("\n1.Insert\n");
    printf("2.Delete\n");
    printf("3.Traverse\n");
    printf("4.Exit\n");
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
                k=0;
                break;
            }
    }
    }
}

void insert()
{
    int ele;
    if(rear==size)
    {
        printf("Queue not empty. \n");
    }
    else
    {
        printf("Enter the element: \n");
        scanf("%d",&ele);
        q[rear]=ele;
        rear+=1;
    }
}

void deletes()
{
    int ele,i;
    if(rear==front)
    {
        printf("Queue is empty. Nothing to delete.\n");
    }
    else
    {
        ele=q[front];
        for(i=0;i<rear;i++)
            q[i]=q[i+1];
        rear-=1;
        printf("Element %d Deleted Successfully.\n",ele);
    }

}

void traverse()
{
    int i;
    if(rear==front)
        {
            printf("Queue is empty. Nothing to traverse.\n");
        }
    else
    {
        for(i=front;i<rear;i++)
        {
            printf("%d\t",q[i]);
        }
    }
}
