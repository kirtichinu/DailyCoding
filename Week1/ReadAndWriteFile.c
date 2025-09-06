#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//reading a file
int main()
{
	FILE* p;
	char x;
	p = fopen("dummy.txt", "r");

	if (NULL == p) {
		printf("file can't be opened \n");
	}

	printf("content of this file are \n");

	while (!feof(p)) {
		x = fgetc(p);
		printf("%c", x);
	}
	fclose(p);
	return 0;
}
