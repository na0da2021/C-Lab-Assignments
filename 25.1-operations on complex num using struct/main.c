#include <stdio.h>
#include <stdlib.h>
struct cmplx
{
    int real;
    int imag;
};

struct cmplx add(struct cmplx,struct cmplx);
struct cmplx sub(struct cmplx,struct cmplx);
struct cmplx mul(struct cmplx,struct cmplx);
struct cmplx Get_cmplx();

int main()
{
    struct cmplx num1,num2,add_,sub_,mul_;
    num1=Get_cmplx();
    num2=Get_cmplx();
    add_=add(num1,num2);
    sub_=sub(num1,num2);
    mul_=mul(num1,num2);
    printf("num1 is : %d+i(%d) \n",num1.real,num1.imag);
    printf("num2 is : %d+i(%d) \n",num2.real,num2.imag);
    printf("add : %d+i(%d) \n",add_.real,add_.imag);
    printf("sub : %d+i(%d) \n",sub_.real,sub_.imag);
    printf("mul : %d+i(%d) ",mul_.real,mul_.imag);

    return 0;
}
struct cmplx Get_cmplx()
{
    struct cmplx temp;
    printf("Enter The Real part of the complex number : ");
    scanf("%d",&temp.real);

    printf("Enter The Imaginary part of the complex number : ");
    scanf("%d",&temp.imag);

   return temp;
};

struct cmplx add(struct cmplx num1,struct cmplx num2)
{
    struct cmplx sum;
    sum.real=num1.real+num2.real;
    sum.imag=num1.imag+num2.imag;

    return sum;
};

struct cmplx sub(struct cmplx num1,struct cmplx num2)
{
    struct cmplx sub_;
    sub_.real=num1.real-num2.real;
    sub_.imag=num1.imag-num2.imag;

    return sub_;
};


struct cmplx mul(struct cmplx num1 ,struct cmplx num2 )
{
  struct cmplx mul_;

  mul_.real=num1.real*num2.real-num1.imag*num2.imag;
  mul_.imag=num1.real*num2.imag+num1.imag*num2.real;

   return mul_;

};
