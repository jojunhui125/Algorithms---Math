#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS 


int main(void)
{
	int n, num, cnt = 0, original_number;
	int a, b;
	scanf("%d", &n);

	original_number = n;
	for (int i = 0; i < 100; i++)
	{
		a = n / 10;
		b = n % 10;
		num = a + b;
		n = b * 10 + num % 10;
		cnt++;
		if (n == original_number)
		{
			break;
		}
	}
	printf("%d", cnt);

	
	return 0;

}