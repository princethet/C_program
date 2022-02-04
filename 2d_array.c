/* declaration :
            datatype arrayname[row][column];
            int a[2][3];

    */
   // WAP to input n elements in 2d array and display the array.
   #include<stdio.h>
   #include<conio.h>
   void main()
   {
       int a[20][20],m,n,i,j;
       printf("Enter the rows & column");
       scanf("%d %d",&m,&n);
       printf("enter elements");
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               scanf("%d",&a[i][j]);
           }
       }
       printf("array is ");
       for(i=0;i<m;i++)
       {
           for(j=0;j<n;j++)
           {
               printf("%d\t",a[i][j]);
           }
       }printf("\n");
   }