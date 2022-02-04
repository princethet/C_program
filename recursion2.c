//WAP to print reverse of a no. using recursion.
/*
#include<stdio.h>
#include<conio.h>
#include<math.h>

int rev(int ,int);

void main()
{
    int n,i,c=0,k;
    printf("enter number= ");
    scanf("%d",&n);
    i=n;
    while(i!=0)
    {
        i=i/10;
        c++;
    }
    k = rev(n,c);
    printf("reverse=%d",k);
    getch();
}

int rev(int n,int c)
{
    if(n==0)
        return 0;
    else
        return (((n%10)*pow(10,c-1))+rev(n/10,--c));
}
  */
#include<stdio.h>
int revNumFunction(int);
int sum=0,rem,revNum,num;

int main()
{
    int num;
    printf("enter the number:\n");
    scanf("%d",&num);
    revNum=revNumFunction(num);
    printf("the reversed number: %d",sum);
    return 0;
}
int revNumFunction(int num)
{
    if(num!=0)
    {
        rem=num%10;
        sum=sum*10+rem;
        revNumFunction(num/10);
        return sum;
    }
    else

        return sum;    
}