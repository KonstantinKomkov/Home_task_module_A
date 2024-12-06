#include <stdio.h>

int main (void)
{
	unsigned int N = 0, number = 0, max_number = 0;
	int K = 0;
	scanf("%u %d", &N, &K);
	for(int i = 0; i <= (32 - K); i++)
	{
		number = (N >> i) & ((1U << K) - 1);
		if(number > max_number)
		{
			max_number = number;
		}
	}
	printf("%u\n", max_number);
	return 0;
}