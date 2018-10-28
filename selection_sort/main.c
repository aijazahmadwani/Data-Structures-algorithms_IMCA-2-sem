/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:SELECTION SORT*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,temp;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    int a[n];
    printf("enter %d numbers ",n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    // logic of selection sort
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)//here i+1 bcz we compare first element with all other elements,then start from second element , then third and so on
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Array in Ascending order");
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);

}
