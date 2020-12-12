#include <stdio.h>

int main () {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
    long long int v11, v12, v21, v22, v31, v32;
    v11 = x2 - x1; // Vector v1 component 1
    v12 = y2 - y1; // Vector v1 component 2
    v21 = x3 - x1; // Vector v2 component 1
    v22 = y3 - y1; // Vector v2 component 2
    v31 = x3 - x2; // Vector v3 component 1
    v32 = y3 - y2; // Vector v3 component 2
    // Check dot prodocts of each pair of vectors v1, v2, v3 to find the right angle
    if (v11 * v21 + v12 * v22 == 0) { 
        // Right angle is  at point (x1, y1). why?
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
    } else if (v11 * v31 + v12 * v32 == 0) { 
        // Right angle is  at point (x2, y2). 
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
    } else { 
        // Right angle is  at point (x3, y3). 
        // Since we know we are dealing with a right triangle there is no need to have an "if" condition here!
        x4 = x1 + x2 - x3;
        y4 = y1 + y2 - y3;
    }
    printf("%d %d", x4, y4);
}