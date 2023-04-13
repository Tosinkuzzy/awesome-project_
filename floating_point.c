#include <stdio.h>

/* The floating point to be printed  */

int main()
{
	int e = 2.718281828;

	printf("%.0d\n", e);
	printf("%.0d.\n", e);
	printf("%.1d\n", e);
	printf("%.2d\n", e);
	printf("%.6d\n", e);
	printf("%d\n", e);
	printf("%.7d\n", e);

	return (0);
}
