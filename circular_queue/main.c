/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//operations on circular queue
#include <stdio.h>
#include <stdlib.h>
# define capacity 5
int cqueue[capacity];
int front=-1,rear=-1,ele;
void menu();
void insert();
void display();
void delete();
int full();
int empty();
int main()
{
    while(1)
    {
    int choice;
    system("cls");
    menu();
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
    default:
        printf("\n\nInvalid input ........Try again");
        break;
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
    printf("*******************************************");
    printf("\nEnter your choice");

}

int full()
{
    if(rear==capacity-1||front==rear+1)
        return 1;
    else
        return 0;
}

int empty()
{
    if(rear==-1&&front==-1)
        return 1;
    else
        return 0;
}

void insert()
{
    if(front==-1&&rear==-1)
        front=rear=0;
    printf("\nEnter element to be inserted");
    scanf("%d",&ele);
    cqueue[rear]=ele;
    printf("%d inserted successfully",ele);
    rear++;
    if(rear==capacity-1)
        rear=0;

}

void delete()
{
    if(front==capacity-1)
        front=0;
    ele=cqueue[front];
    front++;
    printf("%d deleted!",ele);
}

void display()
{
    int i;
    printf("\nElements are : ");
    for(i=front;i<rear;i++)
        printf("%d\t",cqueue[i]);
}
