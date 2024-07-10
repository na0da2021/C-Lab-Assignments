#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   float b,c,x_=0,y_=0, x_y_=0,x_x_=0;
   printf("Enter The size of The two-equaled vectors : ");
   scanf("%d",&n);

   float x[n];
   float y[n];
   int i;

   for(i=0;i<n;i++)
   {
       printf("Enter the element #%d of X_Array : ",i+1);
       scanf("%f",&b);
       x[i]=b;
   }


   printf(" X_Array : ");
   for(i=0;i<n;i++)
   {
       printf("%0.2f  ",x[i]);
   }

   printf("\n\n");


   for(i=0;i<n;i++)
   {
       printf("Enter the element #%d of Y_Array : ",i+1);
       scanf("%f",&c);
       y[i]=c;
   }


   printf(" Y_Array : ");
   for(i=0;i<n;i++)
   {
       printf("%0.2f  ",y[i]);
   }

   for(i=1;i<=n;i++)
   {
       x_=x_+x[i-1];                       //sigma x
   }
   printf("\n\n sigma x : %0.2f",x_);

   for(i=1;i<=n;i++)
   {
       y_=y_+y[i-1];                       //sigma y
   }

   printf("\n\n sigma y : %0.2f",y_);

   for(i=1;i<=n;i++)
   {
       x_y_=(x_y_)+((y[i-1])*(x[i-1]));                       //sigma x*y
   }

   printf("\n\n sigma x*y : %0.2f",x_y_);

   for(i=1;i<=n;i++)
   {
       x_x_=(x_x_)+((x[i-1])*(x[i-1]));                       //sigma x^2
   }

   printf("\n\n sigma x*x : %0.2f",x_x_);

   float x_dash=x_/n  ,  y_dash=y_/n  ,   b_dash=((n*x_y_)-(x_*y_))/((n*x_x_)-(x_*x_))    ,   a_dash=y_dash-(b_dash*x_dash) ;

   printf("\n\n The Fitted line equation :  Y= %0.2f + %0.2f X \n\n",a_dash,b_dash);



    return 0;
}
