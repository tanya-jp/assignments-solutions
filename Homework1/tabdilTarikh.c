/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int input,year,month,day,new;
    
    scanf("%d", &input);
    
    year = input/365;
    new = input%365;
    month = new/30;
    day = new%30;
   
    printf("%d days = (%d year(s)) + (%d month(s)) + (%d day(s))", input,year,month,day);

    return 0;
}
