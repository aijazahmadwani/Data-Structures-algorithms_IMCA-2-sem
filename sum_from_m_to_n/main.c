/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES*/
#include <stdio.h>
#include <stdlib.h>
//Write a program to calculate the sum of numbers from m to n
int main()
{
    int m,n,i,sum;
    printf("enter m : ");
    scanf("%d",&m);
    printf("enter n : ");
    scanf("%d",&n);\
    i=m;
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum of numbers from %d to %d = %d",m,n,sum);


}

