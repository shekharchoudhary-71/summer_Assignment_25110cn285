#include <stdio.h>
int main()
{
    int n, isprime = 1;
    printf("enter no=");
    scanf("%d", &n);
    if (n <= 1)
        isprime = 0;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = 0;
                break;
            }
        }
    }
    if (isprime == 1)
        printf("prime");
    else
        printf("not prime");
    return 0;
}
