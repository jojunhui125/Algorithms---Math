#include <stdio.h>

int main() 
{
	int n, score, big = 0;
	float sum = 0;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &score);
		sum += score;
		if (big < score)
			big = score;
	}
	
	printf("%lf", (sum / big * 100) / n);
	
	return 0;
}
