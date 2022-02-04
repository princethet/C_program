#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5],i;
    for (i = 0; i < 5; i++)
    {
        printf("enter the marks of student %d\n",i);
        scanf("%d",&marks[i]);
        printf("student %d = %d\n",i,marks[i]);
    }
    return 0;
}


 
