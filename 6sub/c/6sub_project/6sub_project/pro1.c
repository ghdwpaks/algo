#include <stdio.h>
#include <stdlib.h>

#define ROW 5

#define COL 20


void sum_even_odd(int arr[][COL]);
void exchange(int idx1, int idx2, int arr[][COL]);
void max_frq(int arr[][COL]);


int main(void)
{
	int i, j, arr[ROW][COL];

	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			arr[i][j] = rand() % 41 + 10;
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	//1) 홀수의 합과 짝수의 합
	sum_even_odd(arr);

	//2)인덱스 20과 인덱스 50의 값을 교환
	exchange(20, 50, arr);

	//3)빈도수가 가장 큰 값을 찾아 출력
	max_frq(arr);
	return 0;
}

void sum_even_odd(int arr[][COL])
{
	int i, j;
	int even = 0, odd = 0;//even: 짝수의 합, odd: 홀수의 합, 

	//아래를 완성하시오
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			if (arr[i][j] % 2 == 1)
			{
				odd += arr[i][j];
			}
			else
			{
				even += arr[i][j];
			}
		}
	}

	printf("1) 홀수의 합: %d,  짝수의 합:%d\n", odd, even);
}

void exchange(int idx1, int idx2, int arr[][COL])

{
	int i1, j1, i2, j2, tmp;
	//i1: idx1의 행 인덱스, j1: idx1의 열 인덱스
	//i2: idx2의 행 인덱스, j2: idx21의 열 인덱스
	//아래를 완성하시오



	tmp = arr[i1][j1];
	arr[i1][j1] = arr[i2][j2];
	arr[i2][j2] = tmp;
	printf("2) 인덱스 20:arr[%d][%d]=%d, 인덱스 50:arr[%d][%d]=%d\n",
		i1, j1, arr[i1][j1], i2, j2, arr[i2][j2]);
}



void max_frq(int arr[][COL])
{
	int i, j, max_i;//max_i: 빈도수 최대값이 위치한 freq 배열에서의 인덱스
	int freq[51] = { 0 }; //배열의 원소 값이 갖는 범위가 10~50 이므로 최대 크기 51로 선언
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			freq[arr[i][j]]++;

	//아래를 완성하시오


	printf("3) arr배열 원소중 빈도수 최대인 요소값:%d, 최대값의 빈도수:%d\n", max_i, freq[max_i]);
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			//if (arr[i][j] == freq[max_i]), 처음 문제에서 오류로 아래줄로 대체합니다.
			if (arr[i][j] == max_i)
				printf("arr[%d][%d] ", i, j);
		}
	}
	printf("\n");
}