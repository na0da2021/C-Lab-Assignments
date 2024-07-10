#include <stdio.h>
#include <stdlib.h>
struct list{
  int data;
  struct list*link;
};

int main()
{
    struct list* head=malloc(sizeof(struct list));
    head->data=0;
    printf("Enter the element#[1] of the list : ");
    scanf("%d",& head->data);
    head->link=NULL;

    struct list* current=malloc(sizeof(struct list));
    int push=0;
    while(head!=NULL)
    {
    printf("If you want to push another element Enter (1) & if not Enter (0) :");
    scanf("%d",&push);
    if(push)

    {
    printf("Enter the next element : ");
    scanf("%d",&current->data);
    current->link=NULL;
    head->link=current;
    }
    if(!push)
    {
        break;
    }
    }


    printf("THE LINKED_LIST : ");

    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
    return 0;
}
