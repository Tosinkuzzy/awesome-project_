#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp;
	fp = fopen(" filename.txt", "w");
	//processing of the files
	fprintf(fp, "%s", "Hello World\n");
	//end of processing
	fclose(fp);
	return 0;
}
