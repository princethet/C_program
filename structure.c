//a structure is a user defined data type in c/c++. a structure creates a data type that can be 
//used to group items of possibly different types into a single type.

// 'struct' keyword is used to create a structure.
// structure variable can either be declared with structure declaration or as a separate declaration like basic types.

#include<stdio.h>
struct Point 
{
    int x,y;
};

int main()
{
    struct Point p1 = {0,1};

    // accessing members of point p1
    p1.y = 20;
    printf("x=%d, y=%d",p1.x,p1.y);

    return 0;
}