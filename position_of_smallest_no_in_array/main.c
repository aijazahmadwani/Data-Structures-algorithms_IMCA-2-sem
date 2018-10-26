/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: PRINT POSITION OF SMALLEST NO. IN AN ARRAY*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,temp,pos=0;
    int array[10];
    printf("enter 10 elements of array");
    for(i=0;i<10;i++)
        scanf("%d",&array[i]);
    temp=array[0];
    for(i=1;i<10;i++)
    {
        if(array[i]<temp)
        {
            temp=array[i];
            pos=i;
        }
    }
    printf("\nSmallest element in array =%d ",temp);
    printf("at position %d",(pos+1));
}
