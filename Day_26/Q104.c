#include <stdio.h>

int main() {
    int ans, score=0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Kolkata 4.Chennai\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("Q2. 5 + 7 = ?\n");
    printf("1.10 2.12 3.13 4.14\n");
    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("Q3. C language developed by?\n");
    printf("1.Dennis Ritchie 2.James Gosling 3.Bjarne Stroustrup 4.Guido van Rossum\n");
    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("Your Score = %d/3\n",score);

    return 0;
}
