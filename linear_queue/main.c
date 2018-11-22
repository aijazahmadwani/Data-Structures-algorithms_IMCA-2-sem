/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//operations on linear queue
#include <stdio.h>
#include <stdlib.h>
#define capacity 5
void insert();
void delete();
void menu();
void display();
int empty();
int full();
int queue[capacity];
int front=0,rear=0,ele;
int main()
{
    while(1)
    {
        system("cls");
    int choice;
    menu();
    printf("\nEnter your choice  :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        if(full())
            printf("\nQueue is full");
        else
            insert();
        break;
    case 2:
        if(empty())
            printf("\nQueue is empty");
        else
            delete();
        break;
    case 3:
        if(empty())
            printf("\nQueue is empty");
        else
            display();
        break;
    case 4:
        exit(0);
        break;
    default :
        printf("\nInvalid choice!.......Try again");

    }
    getch();
    }
}

void menu()
{
    printf("\n1. Insert");
    printf("\n2. Delete");
    printf("\n3. Display");
    printf("\n4. Exit");
    printf("**************************************");
}

int full()
{
    if(rear==capacity)
        return 1;
        else
        return 0;

}

void insert()
{
    printf("\nEnter element to be inserted  ");
    scanf("%d",&ele);
    queue[rear]=ele;
    printf("%d inserted successfully",ele);
    rear++;

}

int empty()
{
    if(front==rear)
        return 1;
    else
    return 0;
}

void delete()
{
    int i;
    ele=queue[front];
    printf("%d deleted successfully",ele);
    //shift the rest elements
    for(i=0;i<rear-1;i++)
        queue[i]=queue[i+1];
    rear--;

}

void display()
{
    int i;
    printf("\nQueue elements are : ");
    for(i=front;i<rear;i++)
        printf("\t%d\t",queue[i]);
}
