#include<stdio.h>
#include<stdlib.h>
void insert();
void delete();
void display();
int a, i, front = -1, rear = -1, queue[100], choice;
int main()
{   printf("Enter the size of the queue:");
    scanf("%d",&a);
    do
    {   printf("\n**********Main Menu**********\n");
        printf("\n1.Insert an element\n2.Delete an element\n3.Display the queue\n4.Exit\n");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            insert();
            break;
            case 2:
            delete();
            break;
            case 3:
            display();
            break;
            case 4:
            exit(0);
            break;
            default:
            printf("\nEnter valid choice\n");
        }
    }while (choice != 4);}
void insert()
{   int item;
    printf("\nEnter the element\n");
    scanf("\n%d",&item);
    if(rear == a-1)
    {
        printf("\nOVERFLOW\n");
        return;}
    if(front == -1 && rear == -1)
    {front = 0,rear = 0;}
    else
    { rear = rear+1;}
    queue[rear] = item;
    printf("\nElement is inserted. ");
}
void delete()
{
    int item;
    if (front == -1 || front > rear)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        item = queue[front];
        if(front == rear)
        {
            front = -1;
            rear = -1 ;
        }
        else
        {
            front = front + 1;
        }
        printf("\nElement is deleted ");
    }
}
void display()
{
    int i;
    if(rear == -1)
    {
        printf("\nEmpty queue\n");
    }
    else
    {   printf("\nThe elements in the queue are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("\n%d\n",queue[i]);
        }
    }
}
