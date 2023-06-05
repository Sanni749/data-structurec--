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
    for(i=1;i<n;i++)
    {
        int flag=0;
        temp=ptr[i];
        j=i-1;
        while(j>=0 && ptr[j]>temp)
        {
            ptr[j+1]=ptr[j];
            j--;
            flag=1;
        } 
        ptr[j+1]=temp;
        if(flag==0)
        break;
    }
    for(i=0;i<n;i++)
    {
        printf("arr[%d]=%d\n",i,ptr[i]);
    }
    return 0;

}