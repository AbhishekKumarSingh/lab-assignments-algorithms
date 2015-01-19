#include <stdio.h>
#include <string.h>

int last(char* s, char c) {
    if (*s == '\0') {
        return 0;
    }
    if (*s == c) {
        int index = last(s+1,c);
        return (index == strlen(s+1))?0:index+1;
    }
    else {
        return 1 + last(++s, c);
    }
}

int main()
{
    char str[10];
    char ch;
    printf("Enter a string and a character : ");
    scanf("%s %c", str, &ch);
    printf("%c is at index %d in %s\n", ch, last(str, ch), str);
    return 0;
}
