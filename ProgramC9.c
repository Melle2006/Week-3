/*Program to find sum of digits of a number*/
#include<stdio.h>
#include<math.h>
int main()
{
	int s=0, n, t;
	printf("Enter a number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		t=n%10;
		s=s+t;
		n=n/10;
	}
	printf("The sum of digits is %d.", s);
	return 0;
}
