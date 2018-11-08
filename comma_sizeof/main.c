/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES*/
//program to demonstrate the use of comma and sizeof operator
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // comma operator
    int a=2,b=5,c;
    c=(++a,a+b);
    //here first a is incremented , then a+b is evaluated and then assigned to c
    printf("comma operator value %d",c);
    //sizeof operator
    // sizeof can be applied to data type, variable and expression
   int d=1;
   //variables
   printf("\nsizeof d = %d",(sizeof(d)));
   char f;
   printf("\n sizeof f= %d",(sizeof(f)));
   //data types
   printf("\n size of int =%d",sizeof(int));
   printf("\n size of char =%d",sizeof(char));
   printf("\n size of float =%d",sizeof(float));
   //expression
   int x=1,y=2,z;
   printf("\nsize of z =%d",sizeof(x+y));

}
