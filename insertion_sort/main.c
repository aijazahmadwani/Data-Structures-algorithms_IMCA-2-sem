/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
// INSERTION SORT
#include <stdio.h>
#include <stdlib.h>
void insertion_sort(int *,int);
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter %d elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("\nSorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();
}

void insertion_sort(int a[],int n)
{
    int i,j,temp;
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j]&&(j>=0))
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
}
