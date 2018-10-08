#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i, j;
	printf("square");
	printf("\n");
	for (i = 0; i < 9; i++)
	{

		for (j = 0; j < 9; j++)
		{
			if (i == 0 || i == 8 || j == 0 || j == 8)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");

	}
	printf("\n");

	printf("circle");
	printf("\n");


	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			printf("   ***   ");
			printf("\n");
		}

		else if (i == 1 || i == 7)
		{
			printf(" *     * ");
			printf("\n");
		}

		else if (i == 2 || i == 3 || i == 4 || i == 5 || i == 6)
		{
			printf("*       *");
			printf("\n");
		}


	}
	printf("\n");

	printf("arrow");
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 3 || i == 4 || i == 5 || i == 6 || i == 7 || i == 8)
		{
			printf("  *  ");
			printf("\n");
		}
		else if (i == 1)
		{
			printf(" *** ");
			printf("\n");
		}
		else if (i == 2)
		{
			printf("*****");
			printf("\n");
		}
	}
	printf("\n");
	printf("diamond");
	printf("\n");
	for (i = 0; i < 9; i++)
	{
		if (i == 0 || i == 8)
		{
			printf("    *    ");
			printf("\n");
		}

		else if (i == 1 || i == 7)
		{
			printf("   * *   ");
			printf("\n");
		}

		else if (i == 2 || i == 6)
		{
			printf("  *   *  ");
			printf("\n");
		}
		else if (i == 3 || i == 5)
		{
			printf(" *     * ");
			printf("\n");
		}
		else if (i == 4)
		{
			printf("*       *");
			printf("\n");
		}

	}
	printf("\n");


	system("pause");
	return 0;



}