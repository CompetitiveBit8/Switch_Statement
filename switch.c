#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i<5; i++)
	{
		switch(i)
		{
		case 0:
			printf("This is zero\n");
			break;
		case 1:
			printf("%d\n", i);
			break;
		case 2:
			printf("%d\n", i);
			break;
		default:
			printf("You are greater than 2\n");
			break;
		}
	}
	printf("\n Out of the for loop");
	return (0);
}
