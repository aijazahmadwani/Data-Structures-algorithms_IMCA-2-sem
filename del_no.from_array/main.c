/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:program to delete a number from an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,no,j;
    printf("enter no. of elements you want to enter");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter no. you want to delete from the array");
    scanf("%d",&no);
    for(i=0;i<n;i++)
    {
        if(no==a[i])
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    n=n-1;
    printf("\n\nupdated array is \n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
    return 0;
}
