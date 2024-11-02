/*Program to check palindrome or not*/
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
	if(a==n)
	printf("\nIt is a palindrome.");
	else
	printf("\nIt is not a palindrome.");
	return 0;
}
