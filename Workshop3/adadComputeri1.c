#include<stdio.h>

main()
{
    int x;
    scanf("The Number is: %d",&x);
    int cnt = 1;
    long long int num = 0, y = 0;
    while(x > 0)
    {
        y += x % 2;
        y *= 10;
        x /= 2;
        cnt++;
    }
    while(cnt > 0)
    {
        num *= 10;
        num += y % 2;
        y /= 10;
        cnt--;
    }
    printf("Your Number in Binary: %lld",num);

}
