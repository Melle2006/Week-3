/*Program to print the nth Fibonacci number series*/
#include<stdio.h>
int main()
{
	int c, a=0, b=1, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	for (c=3;c<=n;c++)
	{
		b=a+b;
		a=b-a;
	}
	printf("The %dth Fibonacci number is %d.", n, b);
	return 0;
	
}
