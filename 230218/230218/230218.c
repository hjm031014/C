/*
// P.410

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int a, random, win = 0, lose = 0;
	char* str[3] = { "바위","가위","보" };
	while (1)
	{
		srand((int)time(NULL));
		random = rand() % 3 + 1;
		printf("바위는 1, 가위는 2, 보는 3 : ");
		scanf("%d", &a);

		if (a == random)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 비겼습니다!\n", str[a - 1], str[random - 1]);
			lose++;
		}
		else if ((a == 3 && random == 1) || a < random)
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 이겼습니다!\n", str[a - 1], str[random - 1]);
			win++;
		}
		else
		{
			printf("당신은 %s 선택, 컴퓨터는 %s 선택, 졌습니다!\n", str[a - 1], str[random - 1]);

			printf("게임의 결과 : %d승, %d무", win, lose);
			return 0;
		}
	}
}
*/

/*
//P.411
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int str[3];
	int com[3];
	int strike=0;
	int ball = 0;
	int cnt = 1;
	int b=0;
	srand((int)time(NULL));
	printf("Start Game!\n");

	
	for (int i = 0; i < 3; i++) {
		
		com[i] = rand() % 9 + 1;
		printf("컴퓨터의 값 ...%d\n", com[i]);
	}
	while (1) {
		printf("3개의 숫자 선택 : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", &str[i]);
		}
		strike = 0;
		ball = 0;
		for (int a = 0; a < 3; a++)
		{
			for (int b = 0; b < 3; b++)
			{
				if (com[a] == str[b])
				{
					if (a == b)
						strike++;
					else
						ball++;

					break;
				}
			}
			
		}

		printf("%d번째 도전 결과 : %dstrike, %dball!!\n", cnt, strike, ball);
		cnt++;
		if (strike == 3)
		{
			printf("Game Over !");
			return 0;
		}
	}

}
*/

/*
#include <stdio.h>

int main(void)
{
	int ch1, ch2;

	ch1 = getchar();
	ch2 = fgetc(stdin);

	putchar(ch1);
	fputc(ch2, stdout);
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
			break;
		putchar(ch);
	}
	return 0;
}
*/

/*
#include <stdio.h>

int main()
{
	char* str = "Simple String";

	printf("1. puts test ------ \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout);	printf("\n");

	printf("3. end of main ---- \n");
}
*/

/*
#include <stdio.h>

int main() {
	char str[7];
	int i;

	for ( i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}
*/

/*
#include <stdio.h>
void ClearLineFromReadBuffer(void) {
	while (getchar() != '\n');
}

int main() {
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력 : ", stdout);
	fgets(perID, sizeof(name), stdin);
	ClearLineFromReadBuffer();

	fputs("이름 입력 : ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);
	return 0;
}
*/

/*
//P.435

#include <stdio.h>
#include <string.h>

void RemoveBSN(char str[]) {
	int len = strlen(str);
	str[len - 1] = 0;
}

int main() {
	char str[100];
	printf("문자열 입력 : ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s\n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s\n", strlen(str), str);
	return 0;
}
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];
	
	strcpy(str2, str1);
	puts(str2);

	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);
	return 0;
}