#include <stdio.h>

struct Bank
{
    int accNo;
    char name[50];
    float balance;
};

int main()
{
    struct Bank c;
    int choice;
    float amount;

    printf("Enter Account Number: ");
    scanf("%d", &c.accNo);

    printf("Enter Customer Name: ");
    scanf("%s", c.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &c.balance);

    do
    {
        printf("\n1. Deposit");
        printf("\n2. Withdraw");
        printf("\n3. Balance");
        printf("\n4. Exit");
        printf("\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Deposit Amount: ");
                scanf("%f", &amount);
                c.balance += amount;
                break;

            case 2:
                printf("Enter Withdraw Amount: ");
                scanf("%f", &amount);

                if(amount <= c.balance)
                    c.balance -= amount;
                else
                    printf("Insufficient Balance\n");
                break;

            case 3:
                printf("\nAccount No : %d", c.accNo);
                printf("\nName : %s", c.name);
                printf("\nBalance : %.2f\n", c.balance);
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}
