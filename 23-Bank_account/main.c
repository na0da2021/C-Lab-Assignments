#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max_Size  1000
struct bank
{
    char name[Max_Size];
    int account_num;
    float balance;

};
struct bank Get_info();
void print_less200(int , struct bank[]);
void add_100(int , struct bank[]);

int main()
{
    int i,n;
    printf("Enter the number of customers : ");
    scanf("%d",&n);
    struct bank store[n];
    for(i=1;i<=n;i++)
    {
        printf("Enter the information of user#[%d] : \n",i);
        store[i-1]=Get_info();
    }

    /*for(i=1;i<=n;i++)
    {
        printf("The Entered Information of user#[%d] :\n1)Name: %s2)Account_number: %d \n3)Balance: %0.2f \n\n",i,store[i-1].name,store[i-1].account_num,store[i-1].balance);

    }*/
    print_less200(n,store);
    add_100(n,store);
    return 0;
}

struct bank Get_info()
{
    fgetc(stdin);
    struct bank temp;
    printf("Enter Name : ");
    fgets(temp.name,Max_Size,stdin);

    printf("Enter account number : ");
    scanf("%d",&temp.account_num);

    do {printf("Enter balance (more than 10 ) : ");
    scanf("%f",&temp.balance);} while (temp.balance<=10);



    return temp;
};

void print_less200(int n , struct bank store[n])
{
    int i,check;
    printf("\n\ncustomers having balances less than $200 :\n");
    for( i=0;i<n;i++)
    {
       if(store[i].balance<200)
    {
        printf("1)Name: %s2)Account_number: %d \n3)Balance: %0.2f \n\n",store[i].name,store[i].account_num,store[i].balance);
    }

    }
    for(i=0;i<n;i++)
    {
        if(store[i].balance>=200)
        {
            check=1;
        }
        else
        {
            check=0;
        }
    }
    if( check==1)
    {
        printf("\n_____No Balance less than $200 _____\n\n");
    }

};

void add_100(int n , struct bank store[n])
{
    int i;
    printf("After adding $100 in the balance of all the customers having more than $1000 in their balance \n");
    for( i=0;i<n;i++)
    {
       if(store[i].balance>1000)
    {
        store[i].balance=store[i].balance+100;
        printf("1)Name: %s2)Account_number: %d \n3)Balance: %0.2f \n\n",store[i].name,store[i].account_num,store[i].balance);
    }

    }

};


