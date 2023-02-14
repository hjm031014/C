/*
#include <stdio.h>

int prime(int num);
int main()
{

	int num = 1;
	int cnt = 1;

	while (cnt<=10)
	{
		if (prime(num))
		{
			printf("%d ", num);
			cnt++;
		}
		num++;
	}
}

int prime(int num)
{
	int i,j,cnt=0;

	
		for (j = 1; j <= num; j++)
		{
			if (num % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 2)
			return 1;
		else
			return 0;
	

}
*/

/*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int h,m,s;
	printf("초 입력 : ");
	scanf("%d", &s);
	
	h = s / 3600;
	
	m = (s % 3600)/60;

	s = s % 60;
	
	printf("h : %d, m : %d, s : %d", h, m, s);

}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, k=1,cnt=0;
	printf("n : ");
	scanf("%d", &n);

	for (; k <= n;cnt++)
	{
		k *= 2;
		
	}
	printf("%d", cnt - 1);
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int a(int k);
int main()
{
	int k;
	printf("정수 입력 : ");
	scanf("%d", &k);

	printf("2의 %d승은 %d", k, a(k));
}

int a(int k)
{
	if (k == 0)
		return 1;
	else
		return 2 * a(k - 1);
}
*/

/*
#include <stdio.h>
int main()
{
	char str[] = "Good morning!";
	printf("배열 str의 크기 : %d \n", sizeof(str));
	printf("널 문자 문자형 출력 : %c \n", str[13]);
	printf("널 문자 정수형 출력 : %d \n", str[13]);

	str[12] = '?';
	printf("문자열 출력 : %s\n", str);
}

0
'\0'
NULL
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char str[50];
	int idx = 0;

	printf("문자열 입력 : ");
	scanf("%s", str);
	printf("입력 받은 문자열 : %s \n", str);

	printf("문자 단위 출력 : ");
	while (str[idx])
	{
		printf("%c", str[idx]);
		idx++;
	}

	printf("\n");
}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int i = 0, cnt=0;
	char str[50];
	printf("문자를 입력하시오 : ");
	scanf("%s", str);

	for (str[i];str[i]!='\0';i++)
	{
		cnt += 1;
	}

	printf("%d", cnt);
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int len = 0;
	char a[30];
	char tmp;
	int cnt = 0;
	printf("문자 입력하ㅣ송!!!");
	scanf("%s", a);
	//for (len; a[len] != '\0'; len++);
	len = strlen(a);
	len -= 1;

	for (int i = 0; i < len / 2; i++)
	{
		tmp = a[i];
		a[i] = a[len - i];
		a[len - i] = tmp;
	}

	printf("%s", a);
}