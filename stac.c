#include<stdio.h>
#define N 5
//int pop;
//int push;
int top=-1;
int stack[N];
void push(int);
void pop();
void display();
void push(int x)
{
    if(top==N-1)
    {
        printf("\nstack is overflow");
    }
    else
    {
        top++;
        stack[top]=x;
    }
}
void display()
{
    if(top==-1)
    {
        printf("\nstack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
}
int main()
{
    push(2);
    return 0;
}