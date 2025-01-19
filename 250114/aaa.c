
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	// 두 정수를 입력 받아 몫과 나머지를 구함
	int a, b;
	printf("두 정수를 입력하시오 : ");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("몫 : %d\n", a / b), printf("나머지 : %d", a % b);

	return 0;

}
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
 // 제곱의 결과를 나타내는 프로그램
	int a;
	printf("정수를 입력하시오 : ");
	scanf("%d", &a);
	printf("%d의 제곱값 : %d", a, a * a);

	return 0;

}
*/

/*
#include <stdio.h>
int main() {
	
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num += 0.1;
	printf("0.1을 100번 더한 값 : %f\n", num);
	

	int a = 15;
	int b = 20;
	int c = a | b;
	printf("OR = %d", c);

	return 0;
	
}
*/

// while을 이용하여 입력 된 값의 구구단 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, cnt=1;
	printf("0 ~ 9까지의 숫자를 입력하시오 : ");
	scanf("%d", &a);
	
	while (cnt <= 9) {
		printf("%d X %d = %d\n", a, cnt, a * cnt);
		cnt += 1;
	}
	return 0;
}

