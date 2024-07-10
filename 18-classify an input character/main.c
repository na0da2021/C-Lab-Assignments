#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character ;
    printf("Enter the character :");
    scanf("%c",&character);
    int ASCII= character;
    //printf("The ASCII Code is : %d\n",ASCII);
    if(ASCII<=90 && ASCII>=65)
    {
        printf(" The character is Upper-Case Letter ");
    }
    else if (ASCII<=122 && ASCII>=97)
    {
        printf(" The character is Lower-Case Letter ");
    }
     else if (ASCII<=57 && ASCII>=48)
    {
        printf(" The character is a Digit ");
    }
    else if (ASCII<=47 && ASCII>=0 || ASCII<=58 && ASCII>=64 || ASCII<=96 && ASCII>=91  || ASCII<=127 && ASCII>=123 )
    {
        printf(" The character is a special symbol ");
    }

    return 0;
}
