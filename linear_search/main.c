/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
//Linear search
#include <stdio.h>
#include <stdlib.h>
#define n 5
int linear_search(int*,int);
int main()
{
    int a[n];
    int i,search,l;
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter number you want to search : ");
    scanf("%d",&search);
    l=linear_search(a,search);
    if(l!=-1)
    {
    printf("Number found at location %d",l);
    }
    if(l==-1)
    {
        printf("Number not found");

    }

}

int linear_search(int a[],int search)
{
    int i;
        for(i=0;i<n;i++)
        {
            if(a[i]==search)
                return (i+1);
        }
        return -1;
}
