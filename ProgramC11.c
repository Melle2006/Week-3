/*Program to check palindrome or not*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, num=0, n, t;
	printf("Enter a number: ");
	scanf("%d", &n);
	t=n;
	while (n!=0)
	{
		a=n%10;
		n=n/10;
		num=num*10+a;
	}
	if(num==t)
	printf("\nIt is a palindrome.");
	else
	printf("\nIt is not a palindrome.");
	return 0;
}
