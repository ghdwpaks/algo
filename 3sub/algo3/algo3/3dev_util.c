#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcatÇÔ¼ö

int main(void) {
	//char N[10000][100];
	char s[100];
	printf("1.%s\n", s);
	sprintf(s, "%d", 10); // N[0] = "0", N[1] = "1"
	printf("2.%s\n", s);
	strcat(s, "666");
	printf("3.%s\n", s);


	return 0;
}