#include <stdio.h>
/* The invisible plus sign     */

int main(void)
{
	printf("%+-5d\n", 0 );
	printf("%+-5d\n", -7);
	printf("%+-5ld\n", 15601336335);
	printf("%+-5d\n", -2035065302);

	return (0);
}
