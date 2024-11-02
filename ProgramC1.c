/*Program to print odd numbers*/
#include<stdio.h>
int main()
{
	int n, i=1, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("1\n");
	while(sum<=n)
	{
		sum=i+2;
		printf("%d\n", sum);
		i+=2;
	}
	return 0;
}
