#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_limit 1000

int main()
{
    char str1[]="he";char str2[]="she";char str3[]="it";char str4[]="we";char str5[]="is";char str6[]="are";char str1_[]="He";char str2_[]="She";char str3_[]="It";char str4_[]="We";int count=0;
    printf("Enter Your Sentence : ");
    char str[max_limit];
    char newString[10][10];
    fgets(str,max_limit,stdin);
    printf("\n\n");
	int  j=0; int ctr=0; int i;
    for(i=0;i<=(strlen(str));i++)
    {
        if(str[i]==' '||str[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;
            j=0;
        }
        else
        {
            newString[ctr][j]=str[i];
            j++;
        }
    }
    int result_1; int result_2;int result_3;int result_4;
    int k ; int l;
    for(k=0;k<ctr ;k++)
    {
        result_1 = strcmp(newString[k],str1);
        result_2 = strcmp(newString[k],str1_);
        if (result_1==0 || result_2==0)
        {
            for(l=0;l<ctr ;l++)
            {
              result_3 = strcmp(newString[l],str5);
              result_4 = strcmp(newString[l],str6);

              if(result_3==0 && l>k )
              {
                  printf("The sentence is grammatically correct!\n");
                  break;

              }
              if(result_4==0 && l>k)
              {
                  *(newString[l])=*str5;
                  *(newString[l]+1)=*(str5+1);
                  *(newString[l]+2)=NULL;
                  count++;
                  break;

              }

            }

        }


    }


    for(k=0;k<ctr ;k++)
    {
        result_1 = strcmp(newString[k],str2);
        result_2 = strcmp(newString[k],str2_);
        if (result_1==0 || result_2==0)
        {
            for(l=0;l<ctr ;l++)
            {
              result_3 = strcmp(newString[l],str5);
              result_4 = strcmp(newString[l],str6);

              if(result_3==0 && l>k)
              {
                  printf("The sentence is grammatically correct!\n");
                  break;
              }
              if(result_4==0 && l>k)
              {
                  *(newString[l])=*str5;
                  *(newString[l]+1)=*(str5+1);
                  *(newString[l]+2)=NULL;
                  count++;
                  break;

              }

            }

        }


    }


    for(k=0;k<ctr ;k++)
    {
        result_1 = strcmp(newString[k],str3);
        result_2 = strcmp(newString[k],str3_);
        if (result_1==0 || result_2==0)
        {
            for(l=0;l<ctr ;l++)
            {
              result_3 = strcmp(newString[l],str5);
              result_4 = strcmp(newString[l],str6);

              if(result_3==0 && l>k)
              {
                  printf("The sentence is grammatically correct!\n");
                  break;
              }
              if(result_4==0 && l>k)
              {
                  *(newString[l])=*str5;
                  *(newString[l]+1)=*(str5+1);
                  *(newString[l]+2)=NULL;
                  count++;
                  break;
              }

            }

        }


    }


    for(k=0;k<ctr ;k++)
    {
        result_1 = strcmp(newString[k],str4);
        result_2 = strcmp(newString[k],str4_);
        if (result_1==0 || result_2==0)
        {
            for(l=0;l<ctr ;l++)
            {
              result_3 = strcmp(newString[l],str5);
              result_4 = strcmp(newString[l],str6);

              if(result_4==0 && l>k)
              {
                  printf("The sentence is grammatically correct!\n");
                  break;
              }
              if(result_3==0 && l>k)
              {
                  count++;
                  *(newString[l])=*str6;
                  *(newString[l]+1)=(*(str6+1));
                  *(newString[l]+2)=*(str6+2);
                  break;

              }

            }

        }


    }
    if(count)
    {
        printf("The sentence is NOT grammatically correct!\n");
        printf("Grammatical Errors: %d\n",count);
        printf("Corrected Sentence :");
        for(i=0;i < ctr;i++)
    {
        printf(" %s ",newString[i]);
    }

    }

    return 0;
}
