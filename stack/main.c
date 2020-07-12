/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
// stack implementation using static array
#include <stdio.h>
#include <stdlib.h>
#define size 5
int stack[size];
int top = -1;

int menu(void);
int isfull(void);
void push(void);
int isempty(void);
void pop(void);
void peek(void);
void display(void);


int main()
{
    while(1)
    {
    system("cls");
    int ch;
    ch = menu();
    switch(ch)
    {
    case 1:
        if(isfull())
        {
            printf("\n\nStack if full");
        }
        else
        {
          push();
        }
        break;
    case 2:
        if(isempty())
        {
            printf("Stack is empty ");

        }
        else
        {
          pop();
        }
        break;
    case 3:
        if(isempty())
        {

           printf("\n\nStack is empty");
        }
        else
        {
           peek();
        }
        break;
    case 4:
        if(isempty())
        {
          printf("\n\nStack is empty");
        }
        else
        {
          display();
        }
        break;
    case 5:
        exit(0);
    default:
        printf("\n\nWrong choice!\n");
    }
    getch();
    }
}

int menu(void)
{
    int choice;
    printf("**************STACK OPERATIONS*******************\n");
    printf("1. PUSH \n");
    printf("2. POP \n");
    printf("3. PEEK \n");
    printf("4. DISPLAY \n");
    printf("5. EXIT \n");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    return choice;
}

int isfull(void)
{
    if(top == size-1)
       {
            return 1 ;
       }
    else
        {
            return 0;
        }
}

int isempty(void)
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(void)
{
    int ele;
    printf("Enter element to insert : ");
    scanf("%d",&ele);
    top++;
    stack[top] = ele;
    printf("%d inserted",ele);
}

void pop(void)
{
    int del;
    del = stack[top];
    top--;
    printf("%d deleted ",del);
}

void peek(void)
{
    printf("\nPeek element = %d ",stack[top]);
}

void display(void)
{
    int i;
    printf("Stack elements are : \n");
    for(i=top;i>=0;i--)
    {
        printf("%d\t",stack[i]);
    }
}
