#include <stdio.h>

int main (void)
{
	unsigned int N = 0, answer = 0;
	int K = 0;
	scanf("%u %d", &N, &K);
	answer = N & ((1U << K) - 1);
	printf("%u\n", answer);
	return 0;
}