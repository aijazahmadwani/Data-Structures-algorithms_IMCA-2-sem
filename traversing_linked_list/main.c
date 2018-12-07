/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
#include <stdio.h>
#include <stdlib.h>
//traversing a linked list
main()
{
    int start=5,ptr;
    char info[8]={'P','M','R','S','N','A','B','D'};
    int link[8]={2,4,3,-1,0,6,7,1};
    printf("start");
    ptr=start;
    while(ptr!=-1)
    {
        printf("->%c",info[ptr]);
        ptr=link[ptr];
    }
    printf("->end");
}
