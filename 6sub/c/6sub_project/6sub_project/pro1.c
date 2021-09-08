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
	//1) Ȧ���� �հ� ¦���� ��
	sum_even_odd(arr);

	//2)�ε��� 20�� �ε��� 50�� ���� ��ȯ
	exchange(20, 50, arr);

	//3)�󵵼��� ���� ū ���� ã�� ���
	max_frq(arr);
	return 0;
}

void sum_even_odd(int arr[][COL])
{
	int i, j;
	int even = 0, odd = 0;//even: ¦���� ��, odd: Ȧ���� ��, 

	//�Ʒ��� �ϼ��Ͻÿ�
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

	printf("1) Ȧ���� ��: %d,  ¦���� ��:%d\n", odd, even);
}

void exchange(int idx1, int idx2, int arr[][COL])

{
	int i1, j1, i2, j2, tmp;
	//i1: idx1�� �� �ε���, j1: idx1�� �� �ε���
	//i2: idx2�� �� �ε���, j2: idx21�� �� �ε���
	//�Ʒ��� �ϼ��Ͻÿ�



	tmp = arr[i1][j1];
	arr[i1][j1] = arr[i2][j2];
	arr[i2][j2] = tmp;
	printf("2) �ε��� 20:arr[%d][%d]=%d, �ε��� 50:arr[%d][%d]=%d\n",
		i1, j1, arr[i1][j1], i2, j2, arr[i2][j2]);
}



void max_frq(int arr[][COL])
{
	int i, j, max_i;//max_i: �󵵼� �ִ밪�� ��ġ�� freq �迭������ �ε���
	int freq[51] = { 0 }; //�迭�� ���� ���� ���� ������ 10~50 �̹Ƿ� �ִ� ũ�� 51�� ����
	for (i = 0; i < ROW; i++)
		for (j = 0; j < COL; j++)
			freq[arr[i][j]]++;

	//�Ʒ��� �ϼ��Ͻÿ�


	printf("3) arr�迭 ������ �󵵼� �ִ��� ��Ұ�:%d, �ִ밪�� �󵵼�:%d\n", max_i, freq[max_i]);
	for (i = 0; i < ROW; i++) {
		for (j = 0; j < COL; j++) {
			//if (arr[i][j] == freq[max_i]), ó�� �������� ������ �Ʒ��ٷ� ��ü�մϴ�.
			if (arr[i][j] == max_i)
				printf("arr[%d][%d] ", i, j);
		}
	}
	printf("\n");
}