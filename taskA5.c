#include <stdio.h>

int main (void)
{
	unsigned int N = 0;
	int number = 0, counter = 0;
	scanf("%u", &N);
	for(int i = 1; i <= 32; i++)
	{
		number = (N >> i) & 0x1;
		if(number == 1)
		{
			counter++;
		}
	}
	printf("%d\n", counter);
	return 0;
}