#include <stdio.h>

int main (void)
{
	int N = 0, number = 0, max_number = 0, max_counter = 0;
	scanf("%d", &N);

	for(int i = 0; i < N; i++)
	{
		scanf("%d", &number);
		if(i == 0)
		{
			max_number = number;
			max_counter = 1;
		}
		else if(number > max_number)
		{
			max_number = number;
			max_counter = 1;
		}
		else if(max_number == number)
		{
			max_counter++;
		}
	}
	printf("%d\n", max_counter);
	return 0;
}