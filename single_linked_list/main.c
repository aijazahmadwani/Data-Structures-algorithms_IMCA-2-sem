/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
// single linked list
#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node* link;
};
struct node* root = NULL;

void add_at_end(void);
void display(void);
void add_at_begin(void);
void add_after_specified_node(void);

int main()
{
    while(1)
    {
    system("cls");
    int choice,ch1,data;
    printf("1.ADD A NODE\n2.DELETE A NODE\n3.DISPLAY\n4.LENGTH OF LISt\n5.REVERSE A LIST\n6.SWAP TWO NODES\n7.EXIT");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\n1.Append / Add node at end\n2.Add at beginning\n3.Add after specified node\n4.Add at a location\n");
        printf("Enter your choice : ");
        scanf("%d",&ch1);
        switch(ch1)
        {
        case 1:
            add_at_end();
            break;
        case 2:
            add_at_begin();
            break;
        case 3:
            add_after_specified_node();
            break;
        case 4:
            break;
        default:
            printf("Invalid choice : ");
        }
        break;
    case 2:
        break;
    case 3:
        display();
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        exit(1);
    default:
        printf("\nInvalid choice...Try again");

    }
    getch();
    }

}

void add_at_end(void)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data: ");
    scanf("%d",&temp->data);
    temp->link = NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node* p;
        p = root;
        while(p->link!=NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void display(void)
{
    struct node* temp;
    temp = root;
    if(temp == NULL)
    {
        printf("List is empty");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->link;
        }
    }
}

void add_at_begin(void)
{
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter node data : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->link = root;
        root = temp;
    }

}

void add_after_specified_node(void)
{
    int data;
    struct node* temp;
  temp =(struct node*)malloc(sizeof(struct node));
  printf("\nEnter node data after you want to insert new node: ");
  scanf("%d",&data);
  printf("\nEnter data to insert : ");
  scanf("%d",&temp->data);
  temp->link=NULL;
  struct node* p;
  struct node* q;
  p = root;
  if(p==NULL)
  {
      printf("\nNO node present.");
  }
  else
  {
    while(p->data!=data)
    {
        p = p->link;
    }
    q = p->link;
   p->link = temp;
   temp->link = q;
  }
}
