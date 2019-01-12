/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:bubble SORT*/
#include <stdio.h>
#include <stdlib.h>
void bubble_sort(int *,int);
//in bubble sort we repeatedly swap adjacent elements if they are in wrong order
int main()
{
    int n,i;
    printf("Enter array size : ");
    scanf("%d",&n);
    int a[n];
    printf("enter %d elements ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    bubble_sort(a,n);
    printf("\nSorted array : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    getch();

}

void bubble_sort(int a[],int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

    }
}
