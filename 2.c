#include <stdio.h>


int isPrefix(char s[], char t[]);

int main()
{
    char sub[10];
    char test[15];
    scanf("%s %s", sub, test);
    //printf("%c", *sub);
    char *p = sub;
    while(*p != '\0') {
        printf("%c", *p);
        p++;
    }
    printf("\n");
    p = test;
    while (*p != '\0') {
    	printf("%c", *p);
        p++;
    }
    printf("\n");
    printf("%d\n", isPrefix(sub, test));
}



int isPrefix(char s[], char t[]) { 
    if (!t && !s)
	return 1;
    if (!s || !t)
        return 0;
    if (*s == '\0')
	return 1;
    if (*s == *t)
    	return isPrefix(++s, ++t);
    else
        return 0; 
}
