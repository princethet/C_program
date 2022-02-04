//string: it is a collection of character or group of character enclosed between doublequotes("")
// 1) there is no separate data type for string in C, it is achieve in C by using array character.
//2) string is 1-D array of character, which is terminated by a null character '\0'.

// declaration of string:
// syntax:
// char variablename[size];

// In string size must be given.
//             char str[5];     #valid
//             char str[];      #invalid

// initializing array string:
        // char str[5] = "abcd"
            // or
        // char str[5] = {'a','b','c','d'};
// in c language string can be initialize using pointer.


// WAP to test a given string is a palindrome string or not.
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char st[30], rst[30];
    int i,j,l;
    printf("enter string:");
    scanf("%s",st);
    i = 0;
    j = strlen(st)-1;
    while(j>=0)
    {
        rst[i] = st[j];
        i++;
        j--;
    }
    rst[i] = '\0';
    if(strcmp(st,rst)==0)
    {
        printf("string is palindrome");
    }
    else
    {
        printf("string is not palindrome");
    }
    getch();
}