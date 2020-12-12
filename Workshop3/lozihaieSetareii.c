#include <stdio.h>

int main()
{
    int m , n, j, i, space , space1 ,space2;

    // printf("Enter number of rows\n");
    scanf("%d", &m);
    n= (m + 1)/2;

    space = n - 1;
    space1 = n - 1;
    space2 = n - 1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= space; j++)
            printf(" ");

        space--;

        for (j = 1; j <= 2*i-1; j++)
            printf("*");

        for (j = 1; j <= space1; j++)
            printf(" ");

        space1--;

        for (j = 1; j <= space2; j++)
            printf(" ");

        space2--;

        for (j = 1; j <= 2*i-1; j++)
            printf("*");

        printf("\n");
    }
/*________________________________UNDER________________________________________*/

    space = 1;
    space1 = 1;
    space2 = 1;

    for (i = 1; i <= n - 1; i++)
    {
        for (j = 1; j <= space; j++)
            printf(" ");

        space++;

        for (j = 1 ; j <= 2*(n-i)-1; j++)
            printf("*");

        for (j = 1; j <= space; j++)
            printf(" ");

        space1++;

        for (j = 1; j <= space - 2; j++)
            printf(" ");

        space2++;

        for (j = 1 ; j <= 2*(n-i)-1; j++)
            printf("*");
        printf("\n");

    }

    return 0;
}
