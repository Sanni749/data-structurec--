#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i,j,n,temp;
    printf("enter a size of array:-");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter arr[%d]=",i);
        scanf("\n%d",&ptr[i]);
    }
    for(i=0;i<n-1;i++)
    {
       int min=i;
       for(j=i+1;j<n;j++)
       {
        if(ptr[j]<ptr[min])
        {
            min=j;
        }
       }
       if(min!=i)
       {
        temp=ptr[i];
        ptr[i]=ptr[min];
        ptr[min]=temp;
       }
    }
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,ptr[i]);
    }
    return 0;

}