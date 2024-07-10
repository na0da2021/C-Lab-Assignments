#include <stdio.h>
#include <stdlib.h>
#define MAX 20
struct list {
  int size;
  int data[MAX];
};

void list_init(struct list*);
int List_Empty(struct list*);
int List_Full(struct list*);
int List_Size(struct list*);
void List_destroy(struct list*);
void List_retrieve(struct list*,int*,int);
void List_replace(struct list*,int,int);
int List_Insert(struct list*,int,int);
int List_delete(struct list*,int*,int);



int main()
{

    return 0;
}

void list_init(struct list*ptr)
{
    ptr->size=0;
}

int List_Empty(struct list*ptr)        //return (1) if empty & return (0) if not
{
    return(ptr->size==0);
}

int List_Full(struct list*ptr)        //return (1) if full & return (0) if not
{
    return(ptr->size==MAX);
}

int List_Size(struct list*ptr)
{
    return(ptr->size);
}

void List_destroy(struct list*ptr)
{
    ptr->size=0;
}

void List_retrieve(struct list*ptr,int*e,int n)
{
    *e=ptr->data[n];
}

void List_replace(struct list*ptr,int e,int n)
{
    ptr->data[n]=e;
}

int List_Insert(struct list*ptr,int e,int n)
{
    if(List_Full(ptr))
    {
        return 0;
    }
    int i;
    for(i=ptr->size-1 ;i>=n; i--)
    {
        ptr->data[i+1]=ptr->data[i];

    }
    ptr->data[n]=e;
    ptr->size++;
    return 1;
}

int List_delete(struct list*ptr,int*e,int n)
{
    if(List_Empty(ptr))
    {
        return 0;
    }


    *e=ptr->data[n];
    int i;
    for(i=n;i<=ptr->size-1;i++)
    {
        ptr->data[i]=ptr->data[i+1];
    }
    ptr->size--;
    return 1;
}

