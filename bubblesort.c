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
        int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp=ptr[j];
                ptr[j]=ptr[j+1];
                ptr[j+1]=temp;
                flag=1;
            }
        }if(flag==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,ptr[i]);
    }
    return 0;

}