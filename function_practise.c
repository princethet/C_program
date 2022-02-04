// Q1: WAP in c to find the average of three numbers
/*
#include<stdio.h>
#include<conio.h>
int fun(int,int,int);
void main()
{
    int n1,n2,n3,k;
    printf("enter the three numbers:\n");
    scanf("%d %d %d",&n1,&n2,&n3);
    k = fun(n1,n2,n3);
    printf("average of the given three number is: %d",k);
}
int fun(int n1,int n2,int n3)
{
    return((n1+n2+n3)/3);
}
*/

//Q2: WAP in c to calculate the force of attraction on a body of mass(m) exerted by earth's gravity(g=9.8m/s2)
#include<stdio.h>
#include<conio.h>
int foa(int, int, int);

void main()
{
    int m1,m2,r,F;
    printf("Enter the masses and distance: ");
    scanf("%d %d %d",&m1,&m2,&r);
    printf("m1=%d\tm2=%d\tdistance=%d",m1,m2,r);
    F = foa(m1,m2,r);
    printf("force of attraction is: %d",F);
}
int foa(int m1,int m2,int r)
{
    float G=6;
    return((G*m1*m2)/(r*r));
}