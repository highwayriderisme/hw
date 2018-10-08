#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int a, b, c;
	printf("please enter three integer:");
	scanf_s("%d%d%d",&a,&b,&c);

	if (b >= c)
	{
		if (a > c)
		{
			if (a >= b)
			{
				printf("the largest integer is:%d", a);
				printf("\n");
				printf("the smallest integer is:%d", c);
				printf("\n");
			}
			else if (b > a)
			{
				printf("the largest integer is:%d", b);
				printf("\n");
				printf("the smallest integer is:%d", c);
				printf("\n");
			}
		}
		else if (c >= a)
		{
			printf("the largest integer is:%d", b);
			printf("\n");
			printf("the smallest integer is:%d", a);
			printf("\n");
		}
	}
	else if (c > b)
	{
		if (a > b)
		{
			if (a >= c)
			{
				printf("the largest integer is:%d", a);
				printf("\n");
				printf("the smallest integer is:%d", b);
				printf("\n");
			}
			else if (c > a)
			{
				printf("the largest integer is:%d", c);
				printf("\n");
				printf("the smallest integer is:%d", b);
				printf("\n");
			}
		}
		else if (b >= a)
			printf("the largest integer is:%d", c);
		printf("\n");
		printf("the smallest integer is:%d", a);
		printf("\n");
	}
	
	
	
	system("pause");
	return 0;
}