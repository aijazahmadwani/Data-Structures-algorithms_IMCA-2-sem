/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: INSERTION OF AN ELEMENT AT THE END OF ARRAY*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
   int a[10];
   printf("Enter 7 elements ");
   for(i=0;i<7;i++)
        scanf("%d",&a[i]);
        printf("enter number you want to insert at the end ");
        scanf("%d",&a[7]);
        printf("\nupdated array is\n");
        for(i=0;i<8;i++)
            printf("%d\t",a[i]);

return 0;
}
