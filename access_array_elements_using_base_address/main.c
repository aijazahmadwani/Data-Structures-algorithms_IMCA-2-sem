/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: ACCESSING ARRAY ELEMENT USING BASE ADDRESS*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int* address;
    address=a;
    printf("base address =%u\n",address);
    for(i=0;i<5;i++){
        printf("at address %u value =",address);
        printf("%d\n\n",(*address));
        address++;
    }
}
