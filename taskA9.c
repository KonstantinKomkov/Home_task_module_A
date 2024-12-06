#include <stdio.h>
#include <stdint.h>

struct pack_array 
{
	uint32_t array; // поле для хранения упакованного массива из 0 и 1
	uint32_t count0 : 8; // счетчик нулей в array
	uint32_t count1 : 8; // счетчик единиц в array
};

void array2struct(int input[], struct pack_array *output)
{
	output->array = 0;
	output->count0 = 0;
	output->count1 = 0;
	for (int i = 0; i < 32; i++)
	{
		if (input[i] == 0)
		{
			output->count0++;
		}
		else if (input[i] == 1)
		{
			output->count1++;
			output->array |= (1 << (31 - i));
		}
	}
}

int main (void)
{
	int array[32];
	struct pack_array result;
	for(int i = 0; i < 32; i++)
	{
		scanf("%d", &array[i]);	
	}
	array2struct(array, &result);
	printf("%u %u %u", result.array, result.count0, result.count1);	
	return 0;
}