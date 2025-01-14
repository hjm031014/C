
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