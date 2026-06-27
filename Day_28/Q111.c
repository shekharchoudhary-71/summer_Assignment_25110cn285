#include <stdio.h>

int main()
{
    int seats = 50;
    int book;

    printf("Total Seats Available = %d\n", seats);

    printf("Enter number of seats to book: ");
    scanf("%d", &book);

    if(book <= seats)
    {
        seats = seats - book;
        printf("Booking Successful!\n");
        printf("Remaining Seats = %d\n", seats);
    }
    else
    {
        printf("Seats Not Available!\n");
    }

    return 0;
}
