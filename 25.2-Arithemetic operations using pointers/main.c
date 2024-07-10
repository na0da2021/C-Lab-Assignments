#include <stdio.h>
#include <stdlib.h>
int add(int,int);
int sub(int,int);
int mult(int,int);
int division(int,int);

int main()
{
    int num1,num2,oper,result;
  int(*ptr[4])(int,int)={add,sub,mult,div};

  printf("Enter The first num : \n");
  scanf("%d",&num1);
  printf("Enter The secon num : \n");
  scanf("%d",&num2);
  printf("Enter The operation(1-add,2-sub,3-mult,4-div) :\n");
  scanf("%d",&oper);
  result=ptr[oper-1](num1,num2);
  printf("The result is %d",result);


}
int add(int num1,int num2)
{
    int z=num1+num2;
    return (z);
}
int sub(int num1,int num2)
{
    int z=num1-num2;
    return (z);
}
int mult(int num1,int num2)
{
    int z=num1*num2;
    return (z);
}
int division(int num1,int num2)
{
    int z=num1/num2;
    return (z);
}
