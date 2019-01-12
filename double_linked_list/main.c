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
void add_after_a_node();
int lenght();
void delete(int);
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
    int choice,data,l,del;
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
    case 5:
        add_after_a_node();
        printf("Inserted successfully!");
        break;
    case 6:
        l=length();
        printf("\nLength = %d",l);
        break;
    case 7:
        display();
        printf("\nEnter element to delete");
        scanf("%d",&del);
        delete(del);
        printf("\nDeleted successfully");
        display();
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
    printf("\n5. Add after a node ");
    printf("\n6. Length of list");
    printf("\n7. Delete a node");
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

void add_after_a_node()
{
    struct node* temp,*t;
    int data;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter data you want to insert : ");
    scanf("%d",&temp->data);
    printf("\nEnter element after you want to insert data :");
    scanf("%d",&data);
    temp->left = NULL;
    temp->right = NULL;
    t=root;
    while(t->data!=data)
    {
        t=t->right;
    }
    temp->right=t->right;
    t->right->left=temp;
    temp->left =  t;
    t->right = temp;

}

int length()
{
    int count=0;
    struct node* t;
    if(root==NULL)
    {
        printf("No element in list");

    }
    else
    {
        t=root;
        while(t->right!=NULL)
        {
            count++;
            t=t->right;
        }
        count++;

    }
return count;
}

void delete(int del)
{
    struct node* temp1,*temp2;
    temp1=root;
    while(temp1->data!=del)
    {
        temp2=temp1;
        temp1 = temp1->right;
    }
    temp2->right=temp1->right;
    temp1->right->left = temp2;
}
