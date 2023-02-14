/*
#include <stdio.h>
int main()
{
	int arr1[3] = { 1,2,3 };
	double arr2[3] = { 1.1,2.2,3.3 };

	printf("%d %g\n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", arr1[0], arr2[0]);

}
*/

/*
#include <stdio.h>
int main()
{
	int arr[6] = { 1,2,3,4,5,6 };
	int a = 0;
	int* p1 = &arr[0];
	int* p2 = &arr[5];
	
	while (a < 3)
	{
		int tmp;

		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
	
		p1++;
		p2--;
		a++;
	}
	for (int i = 0; i < 6; i++)
		printf("%d ", arr[i]);
}
*/

/*
#include <stdio.h>

ShowArayElem(int* param, int len)
{
	int i;
	for (i = 0; i < len; i++)
		printf("%d ", param[i]);
	printf("\n");

}

int main()
{
	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 4,5,6,7,8 };
	ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
	ShowArayElem(arr2, sizeof(arr2) / sizeof(int));
	return 0;
}
*/

/*
#include <stdio.h>

swap(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;
	printf("num1 num2 : %d %d\n", num1, num2);
	swap(&num1, &num2);
	printf("num1 num2 : %d %d\n", num1, num2);
}
*/

/* --------------------------------------------
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int SquareByValue(int i);

int main()
{
	int a = 0;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d", SquareByValue(a));
}

int SquareByValue(int i)
{
	i *= i;
	return i;
}
---------------------------------------------- */

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int SquareByReference(int* i);

int main()
{
	int a = 0;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d", SquareByReference(&a));
}

int SquareByReference(int *i)
{
	int j = *i;
	*i = j * j;
}
*/

/*
#include <stdio.h>
swap(int* a, int* b, int* c);
int main()
{
	int num1 = 10;
	int num2 = 20;
	int num3 = 30;

	printf("%d %d %d\n", num1, num2, num3);

	swap(&num1, &num2, &num3);
	printf("%d %d %d", num1, num2, num3);
}

swap(int *a,int *b,int *c)
{
	 int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}
*/

#include <stdio.h>
void ShowData(const int* ptr)
{
	int* rptr = ptr;
	*ptr += 30;
	printf("%d \n", *rptr);
	*rptr += 20;
}

int main()
{
	int num = 10;
	int* ptr = &num;
	ShowData(ptr);

}