/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:program to delete a number at a given location*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[20],n,i,pos;
    printf("how many numbers you want to enter: ");
    scanf("%d",&n);
    printf("\nEnter %d numbers",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter position from which the number is to be deleted : ");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
        a[i]=a[i+1];
    printf("updated array is \n");
    for(i=0;i<n-1;i++)
        printf("\t%d",a[i]);
    return 0;
}
