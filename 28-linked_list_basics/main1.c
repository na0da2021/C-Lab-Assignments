#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node*link;
};
int main()
{
    struct node*head=malloc(sizeof(struct node));;
    head->data=45;
    head->link=NULL;

    struct node*current=malloc(sizeof(struct node));;
    current->data=90;
    current->link=NULL;

    head->link=current;

    current=malloc(sizeof(struct node));;
    current->data=80;
    current->link=NULL;


    head->link->link=current;


    printf("%d ,%d ,%d ,%p ,%p ,%p ",head->data,head->link->data,head->link->link->data,head->link,head->link->link,head->link->link->link);
    return 0;
}
