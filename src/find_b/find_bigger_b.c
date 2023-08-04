#include "push_swap.h"

int find_bigger_b(int *stack, int size_s)
{
	unsigned int i;
	int temp;
	int j;

	if (!size_s)
		return (0);
	j = 0;
	i = 1;
	temp = stack[0];
	while(i < (unsigned int)size_s)
	{
		if(stack[i] > temp)
		{
			temp = stack[i];
			j = i;
		}
		i++;
	}
	return (j);
}
