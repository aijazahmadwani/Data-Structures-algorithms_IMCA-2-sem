/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: READING AND WRITING OF THE ARRAY*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a[10];
    int i;
    printf("enter 10 elements : ");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("Entered elements are : \n");
    for(i=0;i<10;i++)
        printf("%d\n",a[i]);
    getch();
}
