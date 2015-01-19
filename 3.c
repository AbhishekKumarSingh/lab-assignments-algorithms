#include <stdio.h>

double mean(double x[], int n) {
    if (n == 0)
	return *x;
    else
        return (*x + mean(++x, n-1)*(n-1))/n;
}

int main()
{
    int size, i;
    printf("Enter size of number array : ");
    scanf("%d", &size);
    double num[size];
    for (i = 0; i < size; i++) {
	scanf("%lf", &num[i]);
    }

    printf("Mean of the numbers are %lf\n", mean(num, size));
    return 0;
}
