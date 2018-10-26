/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: FIND SECOND LARGEST NUMBER IN AN ARRAY
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[5],temp,i,second;
    printf("Enter 5 elements of array ");
    for(i=0;i<5;i++)
        scanf("%d",&array[i]);
        temp=array[0];
        for(i=1;i<5;i++)
        {
            if(array[i]>temp)
            {
                temp=array[i];
            }
        }
    printf("largest number =%d",temp);
    second=array[0];
    for(i=1;i<5;i++)
    {
        if(array[i]!=temp)
        {
            if(array[i]>second)
                second=array[i];
        }
    }
    printf("second largest = %d",second);
}
