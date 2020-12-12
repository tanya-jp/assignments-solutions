
#include <stdio.h>

int main()
{
    int seragham,m4,code,m5;
    long int input,m1;
    long long int m2;
    double m3;
    
    
    scanf("%ld", &input);
    
    code = (input/1000) % 100;
    seragham = input%1000;
    m1 = seragham*seragham*seragham;
    input = input/1000;
    m2 = (code)*20482048*m1;
    input = input/100;
    m4 = input/10 + (input%10)*10;
    m5 = m4 % code;
   
    printf("%ld\n%lld\n%d\n%d\n", m1, m2, m4, m5);

    return 0;
}
