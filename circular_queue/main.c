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
        if()
            printf("\nQueue is full");
        else
            insert();
        break;
    case 2:
        if()
            printf("\nQueue is empty");
        else
        delete();
        break;
    case 3:
        if()
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

void insert()
{
    if(front==0&&rear==capacity-1)
    {
        printf("\nOverflow!");
        return;
    }
     if(front==-1&&rear==-1)
        front=0,rear=0;
    else if(rear==capacity-1&&front!=0)
            rear=0;
        else
            rear++;
        printf("\nEnter element to be inserted ");
        scanf("%d",&ele);
        cqueue[rear]=ele;
}

void delete()
{
    if(front==-1)
        {
        printf("\nUnderflow");
        return;
        }
        ele=cqueue[front];
        printf("%d deleted successfully",ele);
        if(front==rear)
            front=rear=-1;


}

void display()
{
    int i;
    printf("\nElements are : ");
    for(i=front;i<rear;i++)
        printf("%d\t",cqueue[i]);
}
