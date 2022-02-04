//WAP to print HCF of two numbers using recursion.
#include<stdio.h>
#include<conio.h>
int hcf(int ,int);

void main()
{
    int n1,n2,k;
    printf("Enter the n1 and n2");
    scanf("%d %d",&n1,&n2);
    k = hcf(n1,n2);
    printf("HCF=%d",k);
    getch();
}
int hcf(int n1,int n2)
{
    while(n1!=n2)
    {
        if(n1>n2)
        return hcf(n1-n2,n2);
        else
        return hcf(n1,n2-n1);
    }
    return n2;
}