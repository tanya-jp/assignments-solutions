#include<stdio.h>

void print_line(int k) {
	if (k == 1)
		printf("*");
	else {
		print_line(k / 2);
		print_line(k / 2);
	}

}

void yet_another_print_line(int k) {
	if (k == 1)
		printf("*");
	else
		yet_another_print_line(k - 1);
}

void pattern(int i, int n, int power) {
	if (i == n) {
		print_line(power);
		printf("\n");
	} else {
		print_line(power);
		printf("\n");
		pattern(i + 1, n, power * 2);
		print_line(power);
		printf("\n");
	}
}

int main() {
	int n;
	scanf("%d", &n);
	pattern(1, n, 1);
}
