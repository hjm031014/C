/*
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
*/

/*
#include <stdio.h>

int main(void) {
	int arr1[2][2] = { {1,2},{3,4} };
	int arr2[3][2] = { {1,2},{3,4},{5,6} };
	int arr3[4][2] = { {1,2},{3,4},{5,6},{7,8} };

	int(*ptr)[2];
	int i;

	ptr = arr1;
	printf("** Show 2,2 arr1 **\n");
	for (i = 0; i < 2; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr2;
	printf("** Show 3,2 arr2 **\n");
	for (i = 0; i < 3; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);

	ptr = arr3;
	printf("** Show 4,2 arr3 **\n");
	for (i = 0; i < 4; i++)
		printf("%d %d \n", ptr[i][0], ptr[i][1]);
}
*/

/*
#include <stdio.h>

int main(void) {
	int num1 = 10, num2 = 20, num3 = 30, num4 = 40;
	int arr2d[2][4] = { 1,2,3,4,5,6,7,8 };
	int i, j;

	int* whoA[4] = { &num1,&num2,&num3,&num4 };		// 포인터 배열
	int(*WhoB)[4] = arr2d;							// 배열 포인터

	printf("%d %d %d %d \n", *whoA[0], *whoA[1], *whoA[2], *whoA[3]);
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 4; j++)
			printf("%d ", WhoB[i][j]);
		printf("\n");
	}
}
*/

#include <stdio.h>
void ShowArr2DStyle(int(*arr)[4], int column);
int Sum2DArr(int arr[][4], int column);

int main(void)
{
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[3][4] = { 1,1,1,1,3,3,3,3,5,5,5,5 };

	ShowArr2DStyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2DStyle(arr2, sizeof(arr2) / sizeof(arr2[0]));
	printf("arr1의 합 : %d \n", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0])));
	printf("arr2의 합 : %d \n", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	return 0;
}

void ShowArr2DStyle(int(*arr)[4], int column)
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d ", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int Sum2DArr(int arr[][4], int column)
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	return sum;
}

// P.384