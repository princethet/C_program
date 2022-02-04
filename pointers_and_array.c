/*
#include<stdio.h>
#include<conio.h>
void main()
{
    int i=3, *x;
    float j=1.5, *y;
    char k='c', *z;

    printf("\nValue of i = %d",i);
    printf("\nValue of j = %f",j);
    printf("\nValue of k = %c",k);
    x = &i;
    y = &j;
    z = &k;
    printf("\nOriginal address in x = %u", x);
    printf("\nOriginal address in y = %u", y);
    printf("\nOriginal address in z = %u", z);
    x++;
    y++;
    z++;
    printf("\nNew address in x = %u",x);
    printf("\nNew address in y = %u",y);
    printf("\nNew address in z = %u",z);



}
*/
// subtraction of one pointer from another
#include<stdio.h>
void main()
{
    int arr[]={10,20,30,45,55,78,74};
    int *i,*j;
    i = &arr[1];
    j = &arr[5];
    printf("%d %d",j-i,*j-*i);
}