#include <stdio.h>

int isDivis(int x, int k) {
    if (k < 2)
        return 0;
    if (x%k == 0)
        return 1;
    return isDivis(x, k-1);
}

int main()
{
    int x, k;
    printf("Enter x and k : ");
    scanf("%d %d", &x, &k);
    printf("%d\n", isDivis(x, k));
    return 0;
}
