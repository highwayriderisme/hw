#include<stdlib.h>
#include<stdio.h>
int main()
{
	float a,b,c;
	printf("please enter your weight In Kilograms: ");
	scanf_s("%f", &a);
	printf("please enter your height In Meters: ");
	scanf_s("%f", &b);
	c = a / (b*b);
	printf("BMI=%f",c);
	printf("\n");
	if (c < 18.5)
	{
		printf("your BMI values is Underweight\n");
	}
	if (18.5 <= c && c< 25)
	{
		printf("your BMI values is Normal\n");
	}
	if (25 <= c && c< 30)
	{
		printf("your BMI values is Overweight\n");
	}
	if (c >= 30)
	{
		printf("your BMI values is Obese\n");
	}
	system("pause");

}