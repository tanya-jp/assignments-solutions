#include <stdio.h>

int main () {
    int n, flag;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        flag = 1;
        for (int j = 2; j * j <= i && flag; j++) {
            if (i % j == 0) {
                flag = 0; // This will also break the loop.
            }
        }
        if (flag)
            printf("%d\n", i);
    }
}