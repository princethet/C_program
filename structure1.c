//designated initialization: it allows structure members to be initialized in any order.
/* #include<stdio.h>
struct point
{
    int x,y,z;
};

int main()
{
    struct point p1 = {.y = 0, .z = 1, .x = 2};
    struct point p2 = {.x = 20};

    printf("x = %d, y = %d, z = %d\n", p1.x, p1.y, p1.z);
    printf("x = %d", p2.x);
    return 0;
} */

// structure of pointer.
// if we have a pointer to structure, members are accessed using arrow(->) operator.
/* #include<stdio.h>
struct point
{
    int x,y;
};

int main()
{   
    struct point p1 = {1,2};

    //p2 is a pointer to structure p1
    struct point *p2 = &p1;

    // accessing structure members
    printf("%d %d",p2->x,p2->y);
    return 0;
} */

// array of structures

#include<stdio.h>
struct point 
{
    int x,y;
};

int main()
{
    // create an array of structures
    struct point arr[10];

    // access array members
    arr[4].x = 10;
    arr[0].y = 20;
    printf("%d %d", arr[0].y, arr[4].x);
    return 0;
}

// LIMITATION OF STRUCTURE IN C:
/* The C structure does not allow the struct data type to be treated like built-in datatype
we can't use operators like +,-etc. on structure variables.
No DATA HIDING:C structure do not permit data hiding.structure members can be accessed by any function, anywhere in the 
scope of the structure.
FUNTIONS INSIDE STRUCTURE: C structure do not permit functions inside structure 
STATIC MEMBERS: C structure can't have static members inside their body
Access Modifiers: C programming language do not support access modifiers. So they can't be used in C structures.
CONSTRUCTION CREATION IN STRUCTURE: structures in C can't have constructor inside structures.
*/