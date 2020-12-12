#include<stdio.h>

void iterative_inverse_fibonacci(int n) {
	int a = 1;
	int b = 1;
	int i = 1;
	int temp;
	while (b <= n) {
		temp = a + b;
		a = b;
		b = temp;
		i++;
	}
	if (a == n)
		printf("%d", i);
	else
		printf("NO");
}

void recursive_inverse_fibonacci(int a, int b, int i, int n) {
	if (b > n) 
		if (a == n)
			printf("%d", i);
		else
			printf("NO");
	else
		return recursive_inverse_fibonacci(b, a + b, i + 1, n);
}

int main () {
	int n;
	scanf("%d", &n);
	// Equivalent function call:
	// iterative_inverse_fibonacci(n);
	recursive_inverse_fibonacci(1, 1, 1, n);
}
