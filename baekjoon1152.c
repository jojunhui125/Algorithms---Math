#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS 


int main()
{
	char a[1000000];
	scanf("%[^\n]", a);
	int len;
	len=strlen(a);
	int cnt = 0;

	if (len == 1)
	{ 
		if (a[0] == ' ') 
		{
			printf("0\n");
			return 0;
		}
	}

	for (int i = 1; i < len - 1; i++)
	{
		if (a[i] == ' ')
		{
			cnt++;
		}
	}

	printf("%d\n", cnt + 1);

	return 0;
}

