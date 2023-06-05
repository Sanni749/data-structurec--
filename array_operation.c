#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull(struct stack *ptr)
{

    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isfull(ptr))
        {
        printf("srack overflow! cannot push %d to the stack\n",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("satck has been created successfully\n");
    printf(" before pushing empty:%d\n", isfull(sp));
    printf(" before pushing full%d\n", isempty(sp));
    push(sp, 2);
    push(sp, 3);
    push(sp, 5);
    push(sp, 7);
    push(sp, 21);
    push(sp, 10);
    push(sp, 8);
    push(sp, 9);
    push(sp, 4);
    push(sp, 6);
    printf(" after pushing empty:%d\n", isfull(sp));
    printf(" after pushing full%d\n", isempty(sp));
    return 0;
}
