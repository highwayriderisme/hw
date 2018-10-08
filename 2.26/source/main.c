#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a, b;
	printf("Enter first integer:");
	scanf_s("%d", &a);
	printf("Enter second integer:");
	scanf_s("%d", &b);
	if (a%b == 0)
	{
		printf("first integer is a multiple of second integer");
	}
	else
	{	
		printf("first integer is not a multiple of second integer");
    }
	printf("\n");
	system("pause");
	return 0;
}