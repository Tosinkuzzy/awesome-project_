#include <stdio.h>

unsigned int factorial(unsigned int n)
{
	int res = 1, i;
	for (i = 2; i <= n; i++)
		res *= i;
	return res;
}

// Driver code

int main()
{
	int num = 5;
	printf("Factorial of %d is %d\n", num, factorial(num));
	return 0;
}
