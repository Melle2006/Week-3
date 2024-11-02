/*Program to find the sum of thr first n natural numbers*/
#include<stdio.h>
int main()
{
	int n, i, sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d", sum);
	return 0;
}
