//WAP TO DISPLAY FIBONACCI SERIES UPTO N TERMS USING RECURSION
/*
#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
    int i,term;
    printf("how many terms of fibbonaci sequence you want to see\n");
    printf("Please enter the term: ");
    scanf("%d",&term);
    for(i=0;i<term;i++)
    {
        printf("%d, ",fibo(i));
    }
}
int fibo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}
  */
//METHOD 2 OF FIBBONACI SEQUENCE OF PROGRAMMING.

#include<stdio.h>
#include<conio.h>
int fibo(int);
void main()
{
    int n,i;
    printf("Enter number the terms for fibbonaci sequence = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
}
int fibo(int n)
{
    if(n==1)
        return 0;
    if(n==2)
        return 1;
    else
        return (fibo(n-1)+fibo(n-2));
}