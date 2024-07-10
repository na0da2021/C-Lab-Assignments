#include <stdio.h>
#include <stdlib.h>

int main()
{
    int code=0;
    printf("Enter the message code : ");
    scanf("%d",&code);

    switch (code)
    {
    case (0):
        printf("The Decoded Message : The enemies are about to attack\n\n");
        break;
    case (1):
        printf("The Decoded Message : The enemies are summoning new forces\n\n");
        break;
    case (2):
        printf("The Decoded Message : The enemies are withdrawing their forces\n\n");
        break;
    }
    return 0;
}
