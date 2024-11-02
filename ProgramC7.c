/*Program to find the length of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int c=0, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		c++;
		n=n/10;
	}
	printf("%d", c);
	return 0;
}
