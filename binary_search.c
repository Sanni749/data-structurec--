// WAP search an element in array using binary search
#include <stdio.h>
#include <conio.h>
void binary_search();
int a[50], n, item, loc, beg, mid, end, i;
void main()
{
    printf("\nEnter size of an array: ");
    scanf("%d", &n);
    printf("\nEnter elements of an array in sorted form:\n");
    for(i=0; i<n; i++)
     scanf("%d", &a[i]);
    printf("\nEnter ITEM to be searched: ");
    scanf("%d", &item);
    binary_search();
    getch();
}
void binary_search()
{
    beg = 0;
    end = n-1;
    mid = (beg + end) / 2;
    while ((beg<=end) && (a[mid]!=item))
    {
        if (item < a[mid])
        end = mid - 1;
        else
        beg = mid + 1;
        mid = (beg + end) / 2;
    }
    if (a[mid] == item)
    printf("\n\n ITEM found at location %d", mid+1);
    else
    printf("\n\n ITEM doesn't exist");
}

