// Enumeration datatype: enum data type
// enumeration is a user defined data type in c which is mainly used to assign names to integral constants.
// It is a data type, each integer value is assigned as identifier.
/*Syntax: enum
            enumeration_name{identifier1,identifier2,.........identifier n};

            enum keyword is basically used  to declare and initialize sequence of integer constants.

            Enumeration_name is optional.

            example:
            */
#include<stdio.h>
int main()
{
    enum{RED=2,BLUE,BLACK=5,GREEN=7,YELLOW,WHITE=15};
    printf("\nRED=%d",RED);
    printf("\nBLUE=%d",BLUE);
    printf("\nBLACK=%d",BLACK);
    printf("\nWHITE=%d",WHITE);
    printf("\nYELLOW=%d",YELLOW);
    printf("\nGREEN=%d",GREEN);
    return 0;
}
