#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)
    {
        int a=i;
        for (int j = 1; j <= i; j++)
        {
            int d=a+64;
            char ch=(char)d;
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}
