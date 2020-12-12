#include <stdio.h>

int main()
{
    int a,b;
    int temp , counter = 0;

    scanf("%d%d",&a ,&b);
    if (b>a)
    {
        temp = b;
        b = a;
        a = temp;
    }
    for(int i = b ; i<=a ; i++)
    {
        counter = 0;
        for (int j = 1 ; j <= i ; j++)
        {
            if (i%j==0)
                counter++;
        }
        if (counter == 2)
            printf("%d\n", i);


    }

    return 0;
}
