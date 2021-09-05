#include <stdio.h>


int main() {
	char str[100];
	char str2[100];


	sprintf(str, "Hello world!");
	sprintf(str2, "%d", 100);

	printf("%s\n", str);
	printf("%s\n", str2);

	return 0;
}