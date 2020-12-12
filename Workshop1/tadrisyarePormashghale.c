#include<stdio.h>
main()
{
	float x1,x2,x3,a;
	scanf("%f %f %f",&x1,&x2,&x3);
	a=x1;
	x1=x2;
	x2=x3;
	x3=a;
	printf("The correct form is %f %f %f",x1,x2,x3);
}

