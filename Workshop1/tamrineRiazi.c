#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,r,q;
	float c,m,Z,X;
	scanf("%d %d %f %d %f %d",&a,&b,&c,&r,&m,&q);
	Z = (8.8*(a + b)*2 / c - 0.5 + 2*a / (q + r)) / ((a + b) * (1 / m));
	X=(-b+(b*b)+2.4*a*c)/(2*a);
	printf("Result for \"Z\" is %.2f",Z);
	printf("\nResult for \"X\" is %.3f",X);
}

