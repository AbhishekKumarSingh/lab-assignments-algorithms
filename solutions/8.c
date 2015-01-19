#include <stdio.h>

int subSeq(char* seq, char* str) {
    if (*str == '\0' && *seq != '\0')
        return 0;
    if (*seq == '\0' || *str == '\0')
        return 1;
    if (*seq == *str)
        return subSeq(++seq, ++str);
    else {
        return subSeq(seq, ++str);
    }
}

int main()
{
    char seq[15];
    char str[20];
    printf("Enter string and subsequence : ");
    scanf("%s %s", str, seq);
    printf("%d\n", subSeq(seq, str));
    return 0;
}
