

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a=0;
	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%d", &a);
	printf("%d�� 16������ %x �Դϴ�.",a,a);
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

	printf("ù��° ������ �Է��Ͻÿ�. : ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��Ͻÿ�. : ");
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

	printf("ù��° ������ �Է��Ͻÿ�. : ");
	scanf("%d", &num1);
	printf("�ι�° ������ �Է��Ͻÿ�. : ");
	scanf("%d", &num2);

	for (int i = 1; i <= num1 && i <= num2; i++)
	{
		if ((num1 % i) + (num2 % i) == 0)
		{
			temp = i;
		}
	}
	printf("�� ���� �ִ������� %d", temp);
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
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n",a,b,c);
}
*/

/*
#include <stdio.h>

int main()
{
	int num,i,cnt=0,count=0;

	for (i=1;count!=10;i++)	// �Ҽ� 10�� ���� ī��Ʈ
	{
		for (num = 1;num<=i ; num++) // 1���� NUM(�ڽ�)���� ����
			if (i % num == 0) // �������� 0�̸�, ���
				cnt++; // ��� ���� ����
		if (cnt == 2) // ����� ������ 2���� ��, 
		{
			printf("%d ", i); 
			count++; // �Ҽ� 10�� ���� ���� 
		}
		cnt = 0; // NUM ���� �ʱ�ȭ
	}
	
}
*/

