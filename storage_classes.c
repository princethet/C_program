/*there are four storage classes in c
    AUTOMATIC STORAGE CLASS*/
#include<stdio.h>
void main()
{
    
    {   auto int i=1;   
        {   auto int i=2;   
            {   auto int i=3;
                printf("\n%d",i);
            }
            printf("%d",i);
        }
        printf("%d",i);
    }
} 