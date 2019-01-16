/* Author: AIJAZ AHMAD WANI
IMCA  SEM -2
Subject: Data Structures
email: aijazahmad9864@gmail.com
Title: operations on binary search tree
*/
#include <stdio.h>
#include <stdlib.h>
int menu(void);
void insert_node_in_binary_tree();
void traverse();
void delete_a_node();
int main()
{
    while(1)
    {
    int choice;
    choice = menu();
    switch(choice)
        {
        case 1:
            insert_node_in_binary_tree();
            break;
        case 2:
            traverse();
            break;
        case 3:
            delete_a_node();
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong choice. Try again");
        }
    }
    getch();
}

int menu()
{
    int choice();
    printf("1. Insert node in binary tree\n");
    printf("2. Traverse\n");
    printf("3. Delete a node\n");
    printf("4. Exit");
    printf("Enter your choice: ");
    scanf("%d",&choice);
    return (choice);
}

void traverse()
{
    printf("Preorder Traversing: \n");
    // code
    printf("Inorder Traversing: \n");
    //code
    printf("Postorder Traversing: \n");
    // code

}
