#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*link;
};
void print_Linked_List(struct node*);

int main()
{
    struct node*head=malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node*current=malloc(sizeof(struct node));
    current->data=60;
    current->link=NULL;

    head->link=current;

    current=malloc(sizeof(struct node));
    current->data=50;
    current->link=NULL;

    head->link->link=current;

     print_Linked_List(head);


    return 0;
}

void print_Linked_List(struct node*head)
{
    while(head != NULL)
    {
        printf("%d\n",head->data);
        head=head->link;
    }
}

