/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:INPUT AND READ NAMES AND MARKS OF ALL STUDENTS,THEN PRINT NAMES AND
MARKS OF ALL THOSE STUDENTS WHO GOT MORE THAN AVERAGE MARKS.
*/
#include <stdio.h>
#include <stdlib.h>
int n;


int main()
{

    int i,sum=0;
    float avrg;
    printf("enter the no. of students : ");
    scanf("%d",&n);


    struct std
{
    char name[20];
    int marks;
}std[n];



    for(i=0;i<n;i++)
        {
            printf("\nenter name and marks of %dth student : ",i);
            scanf("%s",&std[i].name);
            scanf("%d",&std[i].marks);
            sum=sum+std[i].marks;
        }
        avrg=(float)sum/n;
        printf("\naverage = %f",avrg);
        printf("\n name and marks of students who obtained marks more than average\n");
        for(i=0;i<n;i++)
        {
            if(std[i].marks>avrg)
            {
                printf("\n%s",std[i].name);
                printf("\n%d",std[i].marks);
            }
        }
        return 0;
}
