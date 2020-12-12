#include<stdio.h>

int main () {
    int n, a, b, c, x, m = 1, p = 2, q = 3, flag = 1;
    scanf("%d", &n);
    for (int i = 0; i < n && flag; i++) {
        scanf("%d", &x);
        if (i >= 3) {
            a = b;
            b = c;
            c = x;
            m++;
            p++;
            q++;
        } else {
            if (i == 2)
                c = x;
            if (i == 1)
                b = x;
            if (i == 0)
                a = x;
        }
        if (i >= 2) {
            if (b > a && b > c) {
                printf("%d %d %d", m, p, q);
                flag = 0;
            }
        }
    }
    if (flag)
        printf("NO");
}