#include <stdio.h>

int main () {
    int n, min = 1000001, max = -1000001, x;
    long long int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        sum += x;
        if (x < min)
            min = x;
        if (x > max)
            max = x;
    }
    double avg = sum / (double) n;
    printf("min = %d\nmax = %d\navg = %.2lf", min, max, avg);
}