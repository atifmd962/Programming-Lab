#include <stdio.h>
int main()
{
    char a;
    printf("Enter a Word:- ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("%c is Vowel",a);
    else
        printf("%c is a Consonant",a);
    return 0;
}