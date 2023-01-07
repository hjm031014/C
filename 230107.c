/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int cnt = 0;
	int i;
	int a[10];
	int b[10];
	int aindex = 0;
	int bindex = 0;

	while (cnt<10)
	{
		printf("입력 : ");
		scanf("%d", &i);

		if (i % 2 == 0)
		{
			a[aindex++] = i;
		}
		else
		{
			b[bindex++] = i;
		}
		cnt++;
	}
	for (int num1=0;num1<bindex;num1++)
	printf("홀수 출력 : %d\n", b[num1]);
	
	for(int num2 = 0; num2 < bindex; num2++)
	printf("짝수 출력 : %d\n", a[num2]);
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a;
	int cnt = 0;
	int i[10];

	printf("10진 정수 입력 : ");
	scanf("%d", &a);

	while ( a!=0)
	{
		i[cnt] = a % 2;
		cnt++;
		a = a / 2;
		
	}

	for (int b = cnt-1; b >= 0; b--)
		printf("%d", i[b]);
}