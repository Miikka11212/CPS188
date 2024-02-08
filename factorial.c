#include <stdio.h>

int factorial (int n){
	int product;

	product = 1;

	for (int i=n; i>1; i=i-1)
	{
		product = product * i;
	}
	
	return (product); 
}


int
main (void)
{
	int a, result;

	printf ("Enter an integer number: ");
	scanf ("%d", &a);

	result = factorial (a);

	printf ("The factorial of %d is %d.\n", a, result);
	
	return (0);
}
