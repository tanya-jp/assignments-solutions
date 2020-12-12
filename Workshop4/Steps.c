#include<stdio.h>

int simple_fibonacci(int n) {
	if (n == 1)
		return 1;
	if (n == 2)
		return 2;
	return simple_fibonacci(n - 1) + simple_fibonacci(n - 2);
}

int iterative_fibonacci_with_counter(int n) {
	int i = 1;
	int a = 1;
	int b = 1;
	int temp;
	while (i <= n) {
		temp = a + b;
		a = b;
		b = temp;
		i += 1;
	}
	return a;
}

int recursive_fibonacci_with_counter(int a, int b, int i, int n) {
	if (i == n + 1) 
		return a;
	else
		return recursive_fibonacci_with_counter(b, a + b, i + 1, n);
}

int iterative_fibonacci_without_counter(int n) {
	int a = 1;
	int b = 1;
	int temp;
	while (n > 0) {
		temp = a + b;
		a = b;
		b = temp;
		n -= 1;
	}
	return a;
}

int recursive_fibonacci_without_counter(int a, int b, int n) {
	if (n == 0)
	    return a;
	else
	    return recursive_fibonacci_without_counter(b, a + b, n - 1);
}

int main () {
	int n;
	scanf("%d", &n);
	// Equivalent function calls:
	// printf("%d\n", simple_fibonacci(n));
	// printf("%d\n", iterative_fibonacci_with_counter(n));
	// printf("%d\n", recursive_fibonacci_with_counter(1, 1, 1, n));
	// printf("%d\n", iterative_fibonacci_without_counter(n));
	printf("%d\n", recursive_fibonacci_without_counter(1, 1, n));
}
