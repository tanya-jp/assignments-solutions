#include <stdio.h>

int main () {
    /*
        CASE1 : 0 1 0 1 0 1 ...
        CASE2 : 1 0 1 0 1 0 ...
    */
    int case1 = 0, case2 = 0;
    int n;
    short int cur;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%hd", &cur);
        case1 += (i % 2 == 0) ? cur : 1 - cur; 
        // In even indices, case1 increases (case1 += cur) if current lamp is on (cur = 1).  case1 does not change when lamp is off.
        // In odd indices case1 increases (case1 += 1 - cur) if current lamp is off (cur = 0). case1 does not change when lamp is on.
        case2 += (i % 2 == 0) ? 1 - cur : cur;
        // Same as above just reversed!
    }
    printf("%d", case1 > case2 ? case2 : case1);
}