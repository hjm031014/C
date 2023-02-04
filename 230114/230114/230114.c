/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char a[30];
	int len;

	printf("문자열 입력 : ");
	scanf("%s", a);
	len = strlen(a);

	for (int i = 0; i < len/2; i++)
	{
		if (a[i] != a[len-i-1])
		{
			printf("회문이 아니다.\n");
			return 0;
		}
	}
	printf("회문이다.");

}
*/

/*
#include <stdio.h>
BubbleSort(int ary[], int len);
int main()
{
	int arr[4] = { 3,2,4,1 };
	int i;

	BubbleSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 4; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

BubbleSort(int ary[], int len)
{
	int i, j;
	int temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (ary[j] > ary[j + 1])
			{
				temp = ary[j];
				ary[j] = ary[j + 1];
				ary[j + 1] = temp;
			}
		}
	}
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int villa[4][2];
	int popu, i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d층 %d호 인구 수 : ", i + 1, j + 1);
			scanf("%d", &villa[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		popu = 0;
		popu += villa[i][0];
		popu += villa[i][1];
		printf("%d층 인구 수 : %d\n", i + 1, popu);
	}
}
*/

/*
#include <stdio.h>

int main()
{
	int arr[3][9] = {0};

	for (int i = 0; i<3; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			arr[i][j] = (i + 2) * (j + 1);
			printf("%-3d ",arr[i][j]);
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>

int main()
{
	int a[2][4] = { 1,2,3,4,5,6,7,8 };
	int b[4][2] = {0};
	int tmp = 0;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			tmp = a[i][j];
			b[j][i] = tmp;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int arr[5][5] = { 0 };
	int a = 0;
	int sum = 0;
	int i, j;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			switch (j)
			{
			case 0:
				printf("국어 : ");
				scanf("%d", &a);
				sum += a;
				arr[i][j] = a;
				break;

			case 1:
				printf("영어 : ");
				scanf("%d", &a);
				sum += a;
				arr[i][j] = a;
				break;

			case 2:
				printf("수학 : ");
				scanf("%d", &a);
				arr[i][j] = a;
				sum += a;
				break;

			case 3:
				printf("국사 : ");
				scanf("%d", &a);
				arr[i][j] = a;
				sum += a;
				break;

			default:
				arr[i][j] = sum;
				sum = 0;

			}
		}
	}

	j = 0;
	i = 0;

	for (j; j < 5; j++)
	{
		for (int i = 0; i < 4; i++)
		{
			sum += arr[i][j];
		}

		arr[4][j] = sum;
		sum = 0;

	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%4d ", arr[i][j]);
		}
		printf("\n");
	}
}
*/

/*
#include <stdio.h>

int main()
{
	int mean = 0, j, i;
	int record[3][3][2] = {
	{
		{70,80},
		{94,90},
		{70,85}
	},
	{
		{83,90},
		{95,60},
		{90,82}
	},
	{
		{98, 89},
		{ 99,94 },
		{ 91,87 }
	}
	};
	for (i = 0; i < 3;i++)
		for (j = 0; j < 2; j++)
			mean += record[0][i][j];
	printf("A 학급 전체 평균 : %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[1][i][j];
	printf("B 학급 전체 평균 : %g\n", (double)mean / 6);

	mean = 0;
	for (i = 0; i < 3; i++)
		for (j = 0; j < 2; j++)
			mean += record[2][i][j];
	printf("C 학급 전체 평균 : %g\n", (double)mean / 6);
}
*/

/*
#include <stdio.h>
SwapIntptr(int* p1, int* p2);

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 = %d %d\n", *ptr1, *ptr2);

	SwapIntptr(ptr1, ptr2);
	printf("*ptr1, *ptr2 = %d %d\n", *ptr1, *ptr2);
}

SwapIntptr(int* p1, int* p2)
{
	int* temp = p1;
	p1 = p2;
	p2 = temp;
}
*/

/*
#include <stdio.h>

SwapIntPtr(int** dp1, int** dp2)
{
	int* temp = *dp1;
	*dp1 = *dp2;
	*dp2 = temp;
}

int main()
{
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1, ptr2 = &num2;
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);

	SwapIntPtr(&ptr1, &ptr2);
	printf("*ptr1, *ptr2 : %d %d\n", *ptr1, *ptr2);
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnptr);

int main(void)
{
	int* maxPtr;
	int* minptr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("정수 입력 %d : ", i + 1);
		scanf("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxPtr, &minptr);
	printf("최대 : %d, 최소 : %d\n", *maxPtr, *minptr);
}

void MaxAndMin(int* arr, int size, int** mxPtr, int** mnptr)
{
	int* max, * min;
	int i;

	max = min = &arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	*mxPtr = max;
	*mnptr = min;
}