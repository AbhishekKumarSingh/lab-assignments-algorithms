#include <stdio.h>

int count(char* s, char c) { 
    if (!s)
  	return 0;
    if (*s == '\0')
        return 0;
    if (*s == c)
        return 1 + count(++s, c);
    else 
        return count(++s, c);
}


int main()
{
    char str[10];
    char ch;
    printf("Enter string and character : ");
    scanf("%s %c", str, &ch);
    printf("%c appears %d times in %s\n", ch, count(NULL, ch), str);
    return 0;
}
