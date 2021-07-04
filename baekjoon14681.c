#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 


int main()
{
	int a, b;
	int qua[4] = { 1,2,3,4 };
	scanf("%d %d", &a, &b);

	if (a > 0 && b > 0)
	{
		printf("%d", qua[0]);
	}
	if (a > 0 && b < 0)
	{
		printf("%d", qua[3]);
	}
	if (a < 0 && b>0)
	{
		printf("%d", qua[1]);
	}
	if (a < 0 && b < 0)
	{
		printf("%d", qua[2]);
	}
	return 0;
}

