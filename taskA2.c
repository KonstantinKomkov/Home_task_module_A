#include <stdio.h>

int main (void)
{
	unsigned int N = 0, answer = 0;
	int K = 0;
	scanf("%u %d", &N, &K);
	answer = (N >> K)|(N << (32 - K));
	printf("%u\n", answer);
	return 0;
}