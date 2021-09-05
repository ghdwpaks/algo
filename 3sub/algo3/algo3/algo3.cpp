#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> // strcat함수

int main(void) {
	char N[10000][100];
	char s[100];
	for (int i = 0; i < 10000; i++) {
		if (i != 0) {
			printf("%d\n", i);
			sprintf(s, "%d", i); // N[0] = "0", N[1] = "1"
			printf("%s\n", s);


			strcat(s, "666");
		}
		else {
			strcpy(s, "666");
			printf("%s\n", s);
		}

		strcpy(N[i], s);
		printf("N : %s\n", N[i]);
		printf("s : %s\n", s);
		printf("\n");
	}
	int n;
	scanf("%d", &n);
	printf("%s", N[n - 1]);


	return 0;
}