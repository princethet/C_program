// the process of allocating memory to the variables during execution of the program or at run time is known 'dynamics memory allocation'.
//Dynamic memory allocation gives best performance in situations in which we do not know memory requriments in advance.
//C provides four library functions to automatically memory at the run time. These are given below:
/* malloc(): allocates memory and return a pointer to the first byte of allocates space.
calloc(): allocates space for an array of elements and initialize them to zero. similar to malloc(), calloc() also 
return a pointer to the memory.
free(): free previously allocates memory.
realloc(): alters the size of previously allocated memory.


                                malloc() method
        ptr = (cast-type*) malloc(byte-size)
*/
/*
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
    // This pointer will hold the base address of the block(memory) created
    int* ptr;
    int n, i;

    //get the number of elements for the array
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n",n);

    //Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n*sizeof(int));
    // Check if the memory has been successfully
    // allocated by malloc or not
    if(ptr==NULL){
        printf("memory isn't allocated.\n");
        exit(0);
    }
    else{
        //memory has been successfully allocated
        printf("memory successfully allocated using malloc.\n");
        //get the elements of the array
        for(i=0;i<n;++i){
            ptr[i] = i+1;
        }
        // print the elements of the array
        printf("the elements of the array are: ");
        for(i=0;i<n;++i){
            printf("%d", ptr[i]);
        }
    }
    return 0;
}
*/

//                                  calloc() method
/* it is used to dynamically allocate the specified number of blocks of memory of the specified type.It is very much
similar to malloc() but has two different points and these are:
    it initializes each block with a default value '0'.
    it has two parameters or arguments as compare to malloc().

 */
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //this pointer will hold the base address of the block created
    int* ptr;
    int n,i;
    //get the number of elements for the array
    n=5;
    printf("enter the number of elements: %d\n",n);

    //dynamically allocate memory using calloc()
    ptr = (int*)calloc(n, sizeof(int));
    //check if the memory has been successfully allocated or not.
    if(ptr == NULL){
        printf("memory not allocated.\n");
        exit(0);
    }
    else{
        // memory has been successfully allocated
        printf("memory successfully allocated using calloc.\n");

        //get the elements of the array
        for(i = 0;i<n;++i){
            ptr[i] = i+1;
        }
        // print the elements of the array
        printf("the elements of the array are: ");
        for(i=0;i<n;++i){
            printf("%d, ",ptr[i]);
        }
    }
    return 0;
}