/*Program to find factorial of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n, i, prod=1;
	printf("Enter a number: ");
	scanf("%d", &n);
	for(i=1;i<=n;i++)
	prod=prod*i;
	printf("%d factorial is %d.", n, prod);
	return 0;
}
