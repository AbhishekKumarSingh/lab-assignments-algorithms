#include <stdio.h>

int same(char s1[], char s2[]) {
    if (*s1 == '\0' && *s2 == '\0')
        return 1;
    if (*s1 == *s2)
        return same(++s1, ++s2);
    else {
        return 0;
    }
}


int main()
{
    char s1[20];
    char s2[20];
    printf("Enter two strings : ");
    scanf("%s %s", s1, s2);
    printf("%d\n", same(s1, s2));
    return 0;
}
