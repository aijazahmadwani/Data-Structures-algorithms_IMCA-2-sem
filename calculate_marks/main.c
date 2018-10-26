/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM:(a) : CALCULATE THE NUMBER OF STUDENTS WHO GET MORE THAN 60 MARKS
(b) : PRINT NAME AND MARKS OF STUDENTS WHO GET MORE THAN 60 MARKS*/
#include <stdio.h>
#include <stdlib.h>

struct student{
 char name[10];
 int marks;
}stu[5];

int main()
{
    int i,count=0;
    for(i=0;i<5;i++){
    printf("enter student name and marks of %dth student: ",i);
        scanf("%s",&stu[i].name);
        scanf("%d",&stu[i].marks);
    }
    printf("\n\nstudents who obtained more than 60 marks ");
    for(i=0;i<5;i++)
    {
        if(stu[i].marks>60){
            count++;
            printf("%s",stu[i].name);
            printf(" %d",stu[i].marks);
            printf("\n");
        }

    }
    printf("\ntotal no. of students who got more than 60 marks = %d",count);
    getch();
}
