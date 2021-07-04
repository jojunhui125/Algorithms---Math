#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 


int main()
{
	int a, b;
	int na, nb;
	int num[6];
	scanf("%d %d", &a, &b);

	for (int i = 0; i < 3; i++)
	{
		num[i] = a % 10;
		a = a / 10;
		num[i + 3] = b % 10;
		b = b / 10;
	}
	na = num[0] * 100 + num[1] * 10 + num[2];
	nb = num[3] * 100 + num[4] * 10 + num[5];

	if (na > nb)
	{
		printf("%d", na);
	}
	else
	{
		printf("%d", nb);
	}
	
	return 0;
}

