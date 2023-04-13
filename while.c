#include <stdio.h>
// Function to find the factorial of a given number

unsigned int factorial(unsigned int n)
{
	if (n == 0)
		return 1;
	int i = n, fact = 1;
	while (n / i != n)
	{
		fact = fact * i;
		i--;
	}
	return fact;
}

// Driver code 

int main()
{
	int num = 5;
	printf("Factorial of %d is %d\n", num, factorial(num));
	return 0;
}
