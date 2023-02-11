/*
#include <stdio.h>

int main()
{
	int a[3][3] = { {1,2,8},{3,4,7},{5,6,7} };

	printf("a[0] : %p\n", a[0]);
	printf("*(a+0) : %p\n", *(a + 0));

	printf("a[1] : %p\n", a[1]);
	printf("*(a+1) : %p\n", *(a + 1));

	printf("a[2] : %p\n", a[2]);
	printf("*(a+2) : %p\n", *(a + 2));

	printf("%d, %d\n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d\n", a[2][1], *(a[2] + 1));
	printf("%d, %d\n", a[2][1], *(*(a + 2) + 1));
}
*/

/*
#include <stdio.h>

int main(void)
{
	int* arr1[5];
	int* arr2[3][5];

	int* *arr3 = arr1;
	int* (*arr4)[5] = arr2;
	
}
*/

/*
int add(int a, int b)
{
	return a + b;
}

int main(void)
{
	int (*add_func)(int, int) = add;

	add_func(1, 2);

	return 0;
}
*/

/*
// P.395

#include <stdio.h>

int WhoIsfirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
	return cmp(age1, age2);
}

int OlderFirst(int age1, int age2)
{
	if (age1 > age2)
		return age1;
	else if (age1 < age2)
		return age2;
	else
		return 0;
}

int YoungerFirst(int age1, int age2)
{
	if (age1 < age2)
		return age1;
	else if (age1 > age2)
		return age2;
	else
		return 0;
}

int main(void)
{
	int age1 = 20;
	int age2 = 30;
	int first;

	printf("입장순서 1 \n");
	first = WhoIsfirst(age1, age2, OlderFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장 ! \n\n", age1, age2, first);
	
	printf("입장순서 2 \n");
	first = WhoIsfirst(age1, age2, YoungerFirst);
	printf("%d세와 %d세 중 %d세가 먼저 입장 ! \n\n", age1, age2, first);
}
*/

/*
#include <stdio.h>

void SoSimpleFunc(void)
{
	printf("I 'm so simple");
}

int main(void)
{
	int num = 20;
	void* ptr;

	ptr = &num;
	printf("%p \n", ptr);

	ptr = SoSimpleFunc;
	printf("%p \n", ptr);

	*ptr = 100;
}
*/

/*
//	P. 399
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달된 문자열의 수 : %d\n", argc);

	for (i = 0; i < argc; i++)
		printf("%d번째 문자열 : %s\n", i + 1, argv[i]);
	return 0;

}
*/

/*
#include <stdio.h>

void ShowAllString(int argc, char* argv[])
{
	int i;
	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
}

int main(void)
{
	char* str[3] = {
		"C Programming",
		"C++ Programming",
		"JAVA Programming"
	};
	ShowAllString(3, str);
}
*/

/*
#include <stdio.h>

int main(int argc, char* argv[])
{
	int i = 0;
	printf("전달된 문장열의 수 : %d\n", argc);

	while (argv[i]!=NULL)
	{
		printf("%d번째 문자열 : %s\n", i + 1, argv[i]);
		i++;
	}
	return 0;
}
*/

//	P. 410
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int i;
	srand((int)time(NULL));
	for (i = 0; i < 5; i++)
		printf("주사위 %d의 결과 : %d\n",i+1, (rand()%5)+1);
}