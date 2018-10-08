#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,c;
	printf("number  square  cube");
	printf("\n");
	for (a = 0; a <= 3; a++)
	{
		b = a * a;
		c = a * a * a;
		printf("%d       %d       %d", a, b, c);
		printf("\n");
    }
	for (a = 4; a <= 9; a++)
	{
		b = a * a;
		c = a * a * a;
		printf("%d       %d      %d", a, b, c);
		printf("\n");
	}
	for (a = 10; a <= 10; a++)
	{
		b = a * a;
		c = a * a * a;
		printf("%d      %d     %d", a, b, c);
		printf("\n");
	}
	system("pause");
	return 0;

}