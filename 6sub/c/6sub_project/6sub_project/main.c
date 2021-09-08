#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {

	srand(time(NULL));
	int odd_sum = 0;
	int	even_sum = 0;
	int a[5][20];

	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 20; j++)
		{
			a[i][j] = rand() % 41 + 10;	
			if (a[i][j] % 2 == 0) 
				even_sum += a[i][j];
			else odd_sum += a[i][j];
		}
	printf("홀수 총합 : %d\n", odd_sum);
	printf("짝수 총합 : %d\n", even_sum);


	int temp = a[0][19];
	a[0][19] = a[2][9];
	a[02][9] = temp;






	int objs[41];
	for (int i = 0; i < 41; i++) objs[i] = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 20; j++)
			objs[a[i][j]-10] += 1;
	
	int max = 0;
	int maxs_size = 0
		;
	for (int i = 0; i < 41; i++) {
		if (max < objs[i]) {
			max = objs[i];
			continue;
		}
	}

	for (int i = 0; i < 41; i++)
	{
		if (max == objs[i]) {
			maxs_size += 1;
		}
	}

	//printf("max = %d\n", max);
	//printf("max_size = %d\n", maxs_size);


	printf("숫자들중에 ");
	if (maxs_size != 1) {
		int pos = 0;
		int* maxs = (int*)malloc(sizeof(int) * maxs_size);
		for (int i = 0; i < maxs_size; i++) maxs[i] = 0;
		for (int i = 0; i < 41; i++)
			if (objs[i] == max) {
				maxs[pos] = i;
				pos += 1;
			}
		for (int i = 0; i < maxs_size; i++)
			printf("%d ", maxs[i]+10);
		
	}
	else {
		printf("%d", max+10);
	}
	printf("(이)가 가장 많이 나왔습니다.");
	printf("\n\n\n");
	return 0;
}