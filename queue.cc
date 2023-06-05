#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue();
void dequeue();
void display();
int main()
{
    int choice;
    char ch;
    do
    {
        printf("\n 1= enqueue");
        printf("\n 2= dequeue");
        printf("\n 3= display");
        printf("\n enter your choice:-");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: display();
            break;
            default:
            printf("\n you entered a wromg choice");
        }
        printf("\n do you want to continue(y/n)");
        //fflush(stdin);
        scanf(" %c",&ch);
    }while(ch=='Y'|| ch=='y');

}
void enqueue()
{
    int item;
    if(rear==N-1)
    {
        printf("\n queue is full");
        
    }
    else if(front==-1 && rear==-1)
    {
        front=rear=0;
        printf("enter a element to be inserted:-");
        scanf("%d",&item);
        queue[rear]=item;
    }
    else
    {
        printf("\n enter the element to be inserted:-");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}
void dequeue()
{
    int item;
    if(front==-1 && rear==-1)
    {
        printf("queue undeflow.");
    
    }
    else if(rear==front)
    {
        item=queue[front];
        front=rear=-1;
        printf("%d is deleted",item);
    }
    else
    {
        item=queue[front];
        front++;
        printf("\n%d is deleted",item);

    }
}
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("queue is empty");
    }
    else
    {
        for(i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}