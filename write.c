#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	//File Hnalding part 2
	FILE *fileName; //pointer variable (1 step) for handling files in c
	char ch[100];
	fileName = fopen(" filename.txt", "r");
	printf("%s", fgets(ch,50,fileName));
	fclose(fileName);
	return 0;
}
