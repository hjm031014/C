/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char max=0;
	char str[20];
	int i = 0;

	printf("영단어를 입력하시오 : ");
	scanf("%s", str);
	max = str[0];
	while (str[i]!='\0')
	{
		if (str[i] > max)
		{
			max = str[i];
		}
		i+=1;
	}

	printf("%c", max);
}
*/


/*
#include <stdio.h>

int main()
{
	int num;
	int* pAddr;

	*pAddr = 10;

}
*/

/*
#include <stdio.h>
int main()
{
	int num1 = 10;
	int num2 = 20;
	
	int *tmp;
	int *ptr1 = &num1;
	int *ptr2 = &num2;

	(*ptr1) += 10;
	(*ptr2) -= 10;

	tmp = ptr1;
	ptr1 = ptr2;
	ptr2 = tmp;

	printf("NUM1 = %d, NUM2 = %d", *ptr1, *ptr2);
}
*/

/*
#include <stdio.h>

int main()
{
	int arr[3] = { 1, 2, 3 };
	int* ptr = arr;

	int a = ptr[1];

	return 0;
}
*/


#include <stdio.h>

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	int* ptr=arr;
	int i = 0;

	while (i<5)
	{
		//*(ptr + i) += 2;
		*(ptr +=i)+= 2;
		printf("%d ", arr[i]);
		i += 1;
	}
}


/*
#include <stdio.h>
int main()
{
	int ptr;
	int arr[5] = { 1,2,3,4,5 };
	ptr = &arr[5];

	while (true)
	{

	}
}
*/