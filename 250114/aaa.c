// ÇÔ¼ö

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int a, int b) {		// µ¡¼À
	int result;
	result = a + b;
	return result;
}

int sub(int a, int b) {		// »¬¼À
	int result;
	result = a - b;
	return result;
}

int dvi(int a, int b) {		// ³ª´°¼À
	int result;
	result = a / b;
	return result;
}

int mul(int a, int b) {		// °ö¼À
	int result;
	result = a * b;
	return result;
}

int main(){
	int su1, su2, ab;
	printf("µ¡¼ÀÀº 1, »¬¼ÀÀº 2, ³ª´°¼ÀÀº 3, °ö¼ÀÀº 4¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
	scanf("%d", &ab);

	switch (ab)
	{
	default:
		break;
	}
	printf("¼ıÀÚ¸¦ ÀÔ·ÂÇÏ½Ã¿À : ");
	scanf("%d %d", &su1, &su2);
	printf("%d",add(su1, su2));
}