#include <stdio.h>
int main()
{
    char w;
    printf("Enter a Letter:- ");
    scanf("%c",&w);
    switch(w)
    {
        case 'a':printf("%c is a Vowel",w); break;
        case 'e':printf("%c is a Vowel",w); break;
        case 'i':printf("%c is a Vowel",w); break;
        case 'o':printf("%c is a Vowel",w); break;
        case 'u':printf("%c is a Vowel",w); break;
        case 'A':printf("%c is a Vowel",w); break;
        case 'E':printf("%c is a Vowel",w); break;
        case 'I':printf("%c is a Vowel",w); break;
        case 'O':printf("%c is a Vowel",w); break;
        case 'U':printf("%c is a Vowel",w); break;

        default:
            printf("%c is a Consonant",w); break;
    }
    return 0;
}