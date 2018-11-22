/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//stack operation with array implementation
#include <stdio.h>
#include <stdlib.h>
#define capacity 5
int stack[capacity];
int ele,top=-1;
void menu();
void push();
void pop();
void display();
void peek();
int full();
int empty();
int main()
{
    while(1)
    {
        system("cls");
    int choice;
    menu();
    printf("\n\n\nEnter your choice  :");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            if(full())
            {
                printf("Stack is full");
            }
            else
                push();
            break;
        case 2:
            if(empty())
            {
                printf("Stack is empty");
            }
            else
                pop();
                break;
        case 3:
            if(empty())
                printf("Stack is empty");
            else
            peek();
            break;
        case 4:
            if(empty())
                printf("Stack is empty");
            else
            display();
            break;
        case 5:
            exit(0);
        default :
            printf("\nInvalid choice!.....Try again ");
            break;

    }
    getch();
    }
}

void menu()
{
    printf("\n1. PUSH");
    printf("\n2. POP");
    printf("\n3. PEEK");
    printf("\n4. DISPLAY");
    printf("\n5. EXIT");
    printf("\n****************************************************");
}

int full()
{
    if(top==capacity-1)
        return 1;
    else
        return 0;
}
void push()
{
    printf("\nEnter element to be inserted :");
    scanf("%d",&ele);
    top++;
    stack[top]=ele;
    printf("%d successfully inserted",ele);

}

int empty()
{
    if(top==-1)
        return 1;
        else
            return 0;
}

void pop()
{
    ele=stack[top];
    top--;
    printf("%d deleted successfully",ele);
}

void peek()
{
    printf("%d is the top element",stack[top]);
}

void display()
{
    int i;
    for(i=top;i>=0;i--)
        printf("%d\t",stack[i]);
}
