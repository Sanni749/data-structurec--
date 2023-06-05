#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedListtraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" element:%d\n", ptr->data);
        ptr = ptr->next;
    }
};
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->next = second;
    head->data = 15;
    second->next = third;
    head->data = 17;
    third->next = NULL;
    linkedListtraversal(head);
    return 0;
}
