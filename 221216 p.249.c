

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a=0;
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d의 16진수는 %x 입니다.",a,a);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int i = 1;
	int temp=0;

	printf("첫번째 정수를 입력하시오. : ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하시오. : ");
	scanf("%d", &num2);

	if (num1>num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	for (num1 ; num1 <= num2 ; num1+=1)
	{
		i = 1;
		printf("\n");

		while (i<10)
		{
			printf("%d * %d = %d\n", num1, i, num1 *i);
			i++;
		}
	}
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 0;
	int temp = 0;

	printf("첫번째 정수를 입력하시오. : ");
	scanf("%d", &num1);
	printf("두번째 정수를 입력하시오. : ");
	scanf("%d", &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if ((num1 % i) + (num2 % i) == 0)
		{
			temp = i;
		}
	}
	printf("두 수의 최대공약수는 %d", temp);
}
*/

/*
#include <stdio.h>

int main()
{
	int a, b, c = 1;

	for (a = 1; a < 10; a++)
		for (b = 1; b < 10; b++)
			for (c = 1; c < 10; c++)
				if (500*a + 700*b + 400*c == 3500)
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n",a,b,c);
}
*/

/*
#include <stdio.h>

int main()
{
	int num,i,cnt=0,count=0;

	for (i=1;count!=10;i++)	// 소수 10개 개수 카운트
	{
		for (num = 1;num<=i ; num++) // 1부터 NUM(자신)까지 증가
			if (i % num == 0) // 나머지가 0이면, 약수
				cnt++; // 약수 개수 증가
		if (cnt == 2) // 약수의 개수가 2개일 때, 
		{
			printf("%d ", i); 
			count++; // 소수 10개 개수 증가 
		}
		cnt = 0; // NUM 증가 초기화
	}
	
}
*/

