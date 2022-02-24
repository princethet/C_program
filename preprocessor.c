//the '#' symbol indicates that, whenever statements starts with #, is going to the preprocessor
// program, and preprocessor program will execute this statement. Example: #include, #define etc.
/* there are 4 main type of preprocessor directives:
            1) macros
            2) file inclusion
            3) conditional compilation
            4) other directives

            MACROS: this is a piece of code in a program which is given some name.
            whenever this name is encountered by the compiler the compiler replaces the name
            with actual piece of code. The "#define" directive is used to define a macro

#include<stdio.h>
// macro definition
#define LIMIT 5 // the word'LIMIT' in the macro definition is called a 'macro template'.
//There is no semi-colon(;) at the end of macro definition.Macro definition do not need a semi-colon to end.
int main(){int i;
    for(i = 0;i<LIMIT;i++){
        printf("%d\n",i);
    }
    return 0;
} 

// MACRO WITH ARGUMENTS
#include<stdio.h>
// macro with parameter
#define AREA(l, b, h) (l*b*h)
int main()
{
    int l1 = 10, l2 = 5, l3=7, area;
    area = AREA(l1,l2,l3);
    printf("volume of rectangle(funny) is: %d",area);
    return 0;
}
*/
// types of macros:
    /*          1) pre-defined macros
                2) parameterized macros 
    */   
   // 1)
#include<stdio.h>
#include<conio.h>
void main()
{
    printf("%s\n",__FILE__);
    printf("%s\n",__DATE__);
    printf("%s\n",__TIME__);
    printf("%d\n",__LINE__);
    printf("%d\n",__STDC__);
    getch();
}
        

