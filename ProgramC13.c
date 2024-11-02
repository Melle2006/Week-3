/*Pattern*/
#include <stdio.h>
int main()
{
    int i, j, n, m=1; 
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
       { printf("%d   ", m);
        m++;
        }
        printf("\n");
    }
        return 0;
        }   

