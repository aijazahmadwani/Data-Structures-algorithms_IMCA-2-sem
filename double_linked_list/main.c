/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
//various operations on double Linked List
#include <stdio.h>
#include <stdlib.h>
int menu();
void append();
void display();
void display_in_reverse();
void add_at_begin(int);
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* root=NULL;
int main()
{
    while(1)
    {
    system("cls");
    int choice,data;
    choice=menu();
    switch(choice)
    {
    case 1:
        append();
        printf("node inserted successfully");
        break;
    case 2:
        display();
        break;
    case 3:
        display();
        printf("\nEnter data you want to insert in the beginning : ");
        scanf("%d",&data);
        add_at_begin(data);
        printf("\nAdded successfully\n");
        display();
        break;
    case 4:
        display_in_reverse();
        break;
    }
    getch();
    }
    getch();
}

int menu()
{
    int choice;
    printf("\n**************DOUBLE LINKED LIST**************");
    printf("\n1. Append");
    printf("\n2. Display");
    printf("\n3. Add at beginning");
    printf("\n4. Display in reverse order ");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);
    return choice;
}

void append()
{
   struct node* temp,*t;
   temp=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter data: ");
   scanf("%d",&temp->data);
   temp->right=NULL;
   temp->left=NULL;
   if(root==NULL)
   {
       root=temp;
   }
   else
   {
       t=root;
       while(t->right!=NULL)
       {
           t=t->right;
       }
       t->right=temp;
       temp->left=t;

   }
}

void display()
{
    struct node* temp;
    if(root==NULL)
    {
        printf("\nList is empty ");
        return;
    }
    else
    {
        temp=root;
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->right;
        }
    }
}

void add_at_begin(int data)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data=data;
    temp->right=NULL;
    temp->left=NULL;
    //insert at begin
    temp->right=root;
    root=temp;
}

void display_in_reverse()
{
    struct node* temp;
    if(root==NULL)
    {
        printf("List is empty");
        return;
    }
    else
    {
        temp=root;
        while(temp->right!=NULL)
        {
            temp = temp->right;
        }
        while(temp->left!=NULL)
        {
            printf("%d\t",temp->data);
            temp =  temp->left;
        }
        printf("%d",temp->data);
    }
}
