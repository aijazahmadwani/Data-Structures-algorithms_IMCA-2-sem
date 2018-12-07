/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
#include <stdio.h>
#include <stdlib.h>
//creating a linked list

int main()
{
    struct node
    {
        int data;
        struct node* link;
    };
    struct node *first,*second,*third;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    first->data=10;
    first->link=second;
    second->data=20;
    second->link=third;
    third->data=30;
    third->link=NULL;
    printf("%d\n",first->data);
    printf("%d\n",second->data);
    printf("%d\n",third->data);

}

