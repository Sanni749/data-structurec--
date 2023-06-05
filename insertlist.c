#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct list
{
    int data;
    struct list *next;
}*start=NULL,*new1,*temp;
void create();
void recreate();
void insert_at_biginning();
void insert_at_end();
void insert_at_sp_position();
int count_node();
void display();
void main()
{
    int choice;
    char ch;
    do
    {
	// clrscr();
	printf("-----Menu\2-----");
	printf("\npress 1 for create a node");
	printf("\npress 2 for insert at biginming");
	printf("\npress 3 for insert at end");
	printf("\npress 4 for insert at specific position");
	printf("\npress 5 for display");
	printf("\nenter your choice here:-");
	scanf("%d",&choice);
	switch (choice)
	{
	case 1: create();
	break;
	case 2: insert_at_biginning();
	break;
	case 3: insert_at_end();
	break;
	case 4: insert_at_sp_position();
	break;
	case 5: display();
	break;
	default:
	printf("\n you have entered a wrong choice.");
	}
	printf("\n Do you want to continue(y/n):-");
       // fflush(stdin);
	scanf(" %c",&ch);
    } while (ch=='y'||ch=='Y');
   // return 0;
   getch();
}
void create()
{
    new1=(struct list*)malloc(sizeof(struct list));
    printf("\n enter a value to be inserted:-");
    scanf("%d",&new1->data);
    new1->next=NULL;
    start=new1;
}
void recreate()
{
    new1=(struct list*)malloc(sizeof(struct list));
    printf("\n enter a value to be inserted:-");
    scanf("%d",&new1->data);
    new1->next=NULL;
}
void insert_at_biginning()
{
    recreate();
    if(start==NULL)
    {
	start=new1;
    }
    else if(start->next==NULL)
    {
	new1->next=start;
	start=new1;
    }
    else
    {
	new1->next=start;
	start=new1;
    }
}
void insert_at_end()
{
    recreate();
    if(start==NULL)
    {
	start=new1;
    }
    else if(start->next==NULL)
    {
	start->next=new1;
    }
    else
    {
	temp=start;
	while(temp->next!=NULL)
	{
	    temp=temp->next;
	}
	temp->next=new1;
    }
}
void display()
{
    if(start==NULL)
    {
	printf("\n no node found ");
    }
    else
    {
	temp=start;
	while(temp!=NULL)
	{
	    printf("%d\t",temp->data);
	    temp=temp->next;
	}
    }
}
void insert_at_sp_position()
{
    int count,pos,i=1;
    //recreate();
    count=count_node();
    printf("\nenter the position where you want to insert:-");
    scanf("%d",&pos);
    if(pos<=0||(pos>count+1))
    {
	printf("\n invalid position... position should be between 1 and %d",count+1);
    }
    else if(pos==1)
    {
	insert_at_biginning();
    }
    else if(pos==count+1)
    {
	insert_at_end();
    }
    else
    {
	recreate();
	temp=start;
	while(i<pos-1)
	{
	    temp=temp->next;
	    i++;
	}
	new1->next=temp->next;
	temp->next=new1;
    }
}
int count_node()
{
    int count=0;
    if(start==NULL)
    {
	count=0;
    }
    else
    {
	temp=start;
	while(temp!=NULL)
	{
	    count++;
	    temp=temp->next;
	}
    }
    printf("\n %d node exits",count);
    return count;
}