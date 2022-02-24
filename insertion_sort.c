#include<stdio.h>
#include<conio.h>
void main()
{
    int a[20],n,i,j,temp;
    printf("enter n");
    scanf("%d",&n);
    printf("enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        j=i;
        while(a[j]<a[j-1]&&j>0)
        {
            temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
    printf("Array= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    getch();
}
