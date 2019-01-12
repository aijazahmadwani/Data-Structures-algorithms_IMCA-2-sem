/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:SELECTION SORT*/
#include <stdio.h>
#include <stdlib.h>
void selection_sort(int *,int );

int main()
{
    int n,i,j,temp;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers ",n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    selection_sort(a,n);
    printf("Array in Ascending order\n");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

}

void selection_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
