#include <stdio.h>
int main()
{
    int start, end;
    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    for(int i=start; i<=end; i++)
    {
        int temp=i;
        int sum=0,rem;
        while(temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem * rem * rem;
            temp = temp / 10;
        }
        if(sum == i)
            printf("%d ", i);
    }
    return 0;
}
