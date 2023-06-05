#include<stdio.h> 
#include<conio.h> 
#include<stdlib.h> 
#include<alloc.h>
struct node 
{ 
    int data; 
    struct node* link; 
}; 
typedef struct node* pnode; 
pnode head=NULL; 
void menu(void); 
void insertbeg(int); 
void delbeg(void); 
void insertend(int); 
void delend(void); 
void insertafter(int,int); 
void delmid(int); 
void display(void); 
int main() 
{ 
    int ch,x,pos; 
    while(1); 
    {

        menu(); 
        printf("enter ur choice\n"); 
        scanf("%d",&ch); 
        switch(ch) 
        {
            case 1:
                printf("enter element to insert\n");
                scanf("%d",&x); 
                insertbeg(x); 
                break; 
            case 2:
                delbeg(); 
                break; 
            case 3:
                printf("enter element to insert\n"); 
                scanf("%d",&x); 
                insertend(x); 
                break; 
            case 4:
                delend(); 
                break; 
            case 5: 
                printf("enter element,pos to insert\n"); 
                scanf("%d%d",&x,&pos); 
                insertafter(x,pos); 
                break; 
            case 6:
                printf("enter position of element to delete\n"); 
                scanf("%d",&pos); 
                delmid(pos); 
                break; 
            case 7:
                display(); 
                break; 
            case 8:
                exit(0); 
        }
    }
}  
void menu() 
{ 
    printf("1.Insert at Beginning\n2.Delete from Beginning\n3. Insert at End\n4. Delete from End\n"); 
    printf("5. Insert at After\n6. Delete from Mid\n7.Display\n8.Exit\n"); 
} 
void insertbeg(int x) 
{ 
    pnode ptr; 
    ptr=(pnode)malloc(sizeof(struct node)); 
    ptr->data=x; 
    ptr->link=head;
    head=ptr; 
} 
void delbeg()
{ 
    pnode tmp; int x;
    if(head==NULL) 
    { 
        printf("list is empty\n"); 
        return; 
    } 
    tmp=head; 
    head=tmp->link; 
    printf("deleted element is %d\n",tmp->data); 
    free(tmp); 
} 
void insertend(int x) 
{ 
    pnode tmp,ptr; 
    ptr=(pnode)malloc(sizeof(struct node)); 
    ptr->data=x; 
    ptr->link=NULL; 
    if(head==NULL) 
    {
        head=ptr; 
    }
    else 
    {
        tmp=head; 
        while(tmp->link!=NULL) 
        tmp=tmp->link; 
        tmp->link=ptr;
    }
} 
void delend() 
{ 
    pnodeprev=NULL, ptr=head; 
    int x;
    if(head==NULL) 
        {
            printf("listis empty\n"); 
            return; 
        } 
        while(ptr->link!=NULL) 
        { 
            prev=ptr; 
            ptr=ptr->link; 
        } 
    if(prev==NULL) 
    head=NULL; 
    else 
    prev->link=NULL; 
    printf("deleted node:%d\n",ptr->data); 
    free(ptr); 
} 
void insertafter(intx,intpos) 
{ 
    pnodetmp=head, ptr; 
    int i; 
    for(i=1;i<pos;i++) 
        { 
            tmp=tmp->link; 
            if(tmp==NULL) 
            { 
                printf("position out of range\n"); 
                return; 
            } 
        } 
        ptr=(pnode)malloc(sizeof(struct node)); 
        ptr->data=x; 
        ptr->link=tmp- >link; 
        tmp->link=ptr; 
} 
void delmid(intpos) 
{ 
    pnodeprev=NULL, tmp=head; 
    int i; 
    if(head==NULL) 
    { 
        printf("list is empty\n"); 
        return; 
    }
    for (i=0;i<pos;i++) 
    { 
        prev=tmp; 
        tmp=tmp->link; 
        if(tmp==NULL) 
        { 
             printf("position out of range\n"); 
            return;
        } 
    } 
    if(prev!=NULL) 
    prev->link=tmp->link; 
    else 
    head=tmp->link; 
    printf("deleted element: %d\n",tmp->data); 
    free(tmp); 
} 
void display() 
{ 
    pnodeptr=head; 
    printf(“\nLinked List Elements:”);
    while(ptr!=NULL) 
    { 
        printf("%d-->",ptr->data); 
        ptr=ptr->link; 
    } 
    printf("\n"); 
    getch(); 
}

