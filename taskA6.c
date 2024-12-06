#include <stdio.h>

int main (void)
{
	unsigned int N = 0, answer = 0;
	scanf("%u", &N);
	answer = N ^ 0xFF000000;
	printf("%u\n", answer);	
	return 0;
}