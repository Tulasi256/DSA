#include<stdio.h>
#include<ctype.h>
int main()
{
    char C;
    printf("Enter alphabet");
    scanf("%c",&C);
  // C=toupper(C);
    if(isalpha(C))
    {
        switch(C)
        {  
            
            case 'a':
            case 'e':
            case 'i':
            case 'u':
            case 'o':
           printf("\nVowel");
            break;
            // printf("\nVowel");

            default:
            printf("Consonant");
            break;
            
        }
    }
    else
    printf("Invalid input");
    return 0;

}
