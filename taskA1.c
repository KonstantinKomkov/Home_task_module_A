#include <stdio.h>

int main (void)
{
	int N = 0, counter = 0;
	char symbol;
	scanf("%d", &N);
	while((symbol = getchar()) != '.')
	{
		if(symbol != ' ')
		{
			if (symbol >= 'a' && symbol <= 'z')
			{
				symbol = 'a' + (symbol - 'a' + N) % 26;
			}
			else if (symbol >= 'A' && symbol <= 'Z')
			{
				symbol = 'A' + (symbol - 'A' + N) % 26;
			}
			putchar(symbol);
		}
		else if(counter > 0)
		{
			putchar(symbol);
		}
		counter++;
	}
	putchar('.');
	return 0;
}