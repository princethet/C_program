//SEARCHING: it is process to find particular value exist in the array or not 
// If the value is present in the array the searching is said to be successful otherwise searching is said 
// to be unsuccessful.

/* IT CAN BE DONE IN TWO WAYS:
                            1)linear search.
                            2)binary search.       */


                            // PROGRAM OF LINEAR SEARCH
/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20], n, i, item, loc=-1;
    printf("enter the number of n item: \n");
    scanf("%d",&n);
    printf("input element");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(item = a[i])
        {
            loc=i;
            printf("%d item found at %d position\n",item,loc+1);
        }
    }
    if(loc==-1)
    printf("search is successful");
    getch();
}

    BINARY SEARCH: IT CAN BE APPLIED ONLY TO SORTED ARRAY.IT IS MORE EFFICIENT TO LINEAR SEARCH.
*/ 

// PROGRAM OF BINARY SEARCH
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,i,beg,end,mid,item;
    printf("Enter value of n and item: ");
    scanf("%d %d",&n,&item);
    printf("Input elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    beg = 0;
    end = n-1;
    mid = (beg+end)/2;
    while(beg<=end&&a[mid]!=item)
    {
        if(item>a[mid])
        {
            beg = mid + 1;
        }
        if(item<a[mid])
        {
        end = mid-1;
        }
    mid =(beg+end)/2;
    }
    if(item==a[mid])
    {
        printf("%d item is found at %d pos",item,mid+1);
    }
    else
    printf("search unsuccessful");
    getch();
}