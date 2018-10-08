#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a;
    printf("Enter a integer:");
    scanf_s("%d", &a);
	if (a % 2 == 0)
	{
		printf("%d is an even integer",a);
		printf("\n");
	}
	else if (a % 2 == 1)
	{
		printf("%d is an odd integer",a);
		printf("\n");
	}
	system("pause");
	return 0;
}