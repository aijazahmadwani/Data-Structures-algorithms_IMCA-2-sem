/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:program to insert a number at a given location in an array*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100];
    int pos,n,i,j,no;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    printf("enter %d elements : ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nenter position where you want to insert an element");
    scanf("%d",&pos);
    printf("\nenter element to be inserted at position %d",pos);
    scanf("%d",&no);
    for(i=n-1;i>=pos;i--)
            a[i+1]=a[i];
    a[pos]=no;
    n=n+1;
    printf("\n array after insertion ");
    for(i=0;i<n;i++)
        printf("\n%d",a[i]);
    return 0;
}
