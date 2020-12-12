#include <stdio.h>

int main () {
    int n, i = 2;
    scanf("%d", &n);
    /*
    // Approach 1
    while (n > 1) {
        if (n % i == 0)
            n /= i;
        else {
            printf("NO");
            n = -1;
        }
        i++;
    }
    if (n == 1) {
        printf("%d", i - 1);
    }
    */
    
    // Approach 2
    int j = 2;
    i = 1;
    while (i < n) {
        i *= j++;
    }
    if (i == n)
        printf("%d", j - 1);
    else
        printf("NO");
}
