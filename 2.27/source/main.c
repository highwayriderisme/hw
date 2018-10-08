#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a,b,c;
	for (a = 1; a < 6; a++) 
    {
		for (b = 0; b < 5-a ; b++) 
	    {
			printf(" ");
	    }
	    for (c = 0; c < a * 2-1;c++)
		{
		    printf("*");
	    }
	    printf("\n");
	}
    system("pause");
    return 0;
}