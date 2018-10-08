#include <stdlib.h>
#include <stdio.h>
int main()
{
	float a, b, c, d, e, f;
	printf("Your total miles driven per day: ");
	scanf_s("%f", &a);
	printf("Your cost per gallon of gasoline: ");
	scanf_s("%f", &b);
	printf("Your average miles per gallon: ");
	scanf_s("%f", &c);
	printf("Your parking fees per day: ");
	scanf_s("%f", &d);
	printf("Your tolls per day: ");
	scanf_s("%f", &e);
	f = a * b * c + d + e;
	printf("total:%f",f);
	printf("\n");
	system("pause");
	


}