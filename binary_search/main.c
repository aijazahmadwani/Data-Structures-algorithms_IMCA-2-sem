/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
// Binary search
#include <stdio.h>
#include <stdlib.h>
# define n 10
int lower_bound = 0, upper_bound = n;
int binary_search(int*,int);
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9,10};
    printf("Enter number to be searched : ");
    scanf("%d",&search);
    l = binary_search(a,search,);
    if(l!=-1)
    {
        printf("search successfull\n Number is present at location %d",l+1);
    }
    else
    {
        printf("Number not present");
    }

}

int binary_search(int a[],int search)
{
    int mid ,i;
    mid = (lower_bound + upper_bound)/2;
    while()

}
