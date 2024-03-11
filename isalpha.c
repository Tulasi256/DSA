#include <stdio.h>
#include <ctype.h>
#include<stdlib.h>

int main() {
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    if (isalpha(ch)) 
        printf("valid alphabet");
        else
        printf("invalid ");
    
}