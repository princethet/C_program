// union: a union is a special datatype(user defined) that allow to store different types of data type
// in the same memory location. we can define a union with many members but only one member can contain 
// a value al a time.It is provide an efficient way of using the same memory location for multiple purpose.
// syntax:
    //    union student 


    /*{
        data type var1;
        data type var2;
        ....
        ...
    };

    struct student
    {
        int a;
        char b;
        float c;
    }
    

    union student 
    {
        int a;
        float b;
        char c;
    }*/

#include<stdio.h>
//declaration of union is same as structures.
union test{
    int x,y;
};

int main()
{
    // A union variable t
    union test t;
    t.x = 2;//t.y also gets value 2
    printf("after making x = 2:\n x = %d, y = %d\n\n",t.x,t.y);
    t.y = 10; // t.x is also updated to 10
    printf("after making y = 10:\n x = %d, y = %d\n\n",t.x,t.y);
    return 0;
}