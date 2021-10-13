#include <stdio.h>
#include <string.h>
#define DEST_SIZE 100
int main()
{
	char s[] = "R N S Institute of technology";
	char dest[DEST_SIZE] = " Bengaluru";
	strcat(s, dest);
	printf(s);
	return 0;
}
