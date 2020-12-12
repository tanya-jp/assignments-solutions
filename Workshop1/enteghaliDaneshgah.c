#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float num1,num2,num3,num4,num5,res;
	scanf("%f %f %f %f %f",&num1,&num2,&num3,&num4,&num5);
	res=num1+num2+num3+num4+num5;
	res=res/5;
	printf("%.2f",res);
	return 0;
}

