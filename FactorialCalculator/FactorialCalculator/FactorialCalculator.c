#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf_s("Calculating 8!:\n\n");
	int iterator = 1;
	int sequenceSum = 1;
	while (iterator <= 8)
	{
		sequenceSum *= iterator;
		printf_s("%d! = %d\n", iterator, sequenceSum);
		iterator++;
	}
	return 0;
}