#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char array[100];

    printf("Enter your sentence to get total number of alphabets, digits and special characters : ");
    fgets(array,100,stdin);

    count(array,100);
    return 0;
}

void count(char array[],int x)
{
   int i, alpha,digit,splch,sentence_length ;
    i=alpha=digit=splch=0;
    sentence_length=strlen(array);

         for(i=0;i<sentence_length;i++)
    {
        if((array[i]>='a' && array[i]<='z') || (array[i]>='A' && array[i]<='Z'))
        {
            alpha++;
        }

        else if((array[i]>='0' && array[i]<='9'))
        {
            digit++;
        }
        else

        {
            splch++;
        }
    }

    printf("Number of Alphabets in the string is : %d\n", alpha);
    printf("Number of Digits in the string is : %d\n", digit);
    printf("Number of Special characters in the string is : %d\n\n", splch);



    return;

}
