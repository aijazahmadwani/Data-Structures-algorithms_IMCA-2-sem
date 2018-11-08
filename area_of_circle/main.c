/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES*/
//program to calculate the area of a circle
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    double area;
    printf("enter area of circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    printf("area = %.2lf",area);
}
