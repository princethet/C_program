// WAP in c to find factorial of a no. using recursion.
#include<stdio.h>
#include<stdio.h>

int fact(int);
void main()
{
    int num,k;
    printf("enter the number");
    scanf("%d",&num);
    k = fact(num);
    printf("%d",k);
} 
int fact(int n)
{
    if(n==0)
        return 1;
    else            
        return(n*fact(n-1));            
}