#include <stdio.h>

int main(void)
{
	int first_num = 1, second_num = 2, count, next;

	printf("%d, %d, ", first_num, second_num);

	for (count = 2; count < 49; count++)
	{
		next = first_num + second_num;
		
		printf("%d", next);

		if (count < 97)
		{
			printf(", ");
		}
		else if(count >97)
		{
		    continue;
		}
	first_num = second_num;
	second_num = next; 
	}
	printf("\n");
	return (0);
}
