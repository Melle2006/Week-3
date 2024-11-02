/*Program to find the reverse of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, n;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		a=n%10;
		n=n/10;
		printf("%d", a);
	}
	return 0;
}
