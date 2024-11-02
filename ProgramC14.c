/*Pattern*/
#include <stdio.h>
int main()
{
    int i, j,n, m; 
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        for(j=0, m=1; j<=i; j++, m++)
       { printf("%d", m);
       if (j<i)
       printf("x");
       
        }
        printf("\n");
    }
     for (i=0; i<n; i++)
    {
        for(j=0, m=1; j<n-i; j++, m++)
       { printf("%d", m);
       if (j<n-i-1)
       printf("x");
}
         m++;
        printf("\n");
    }
        return 0;
        }   
