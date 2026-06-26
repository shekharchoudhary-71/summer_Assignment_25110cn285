#include <stdio.h>

int main() {
    int choice;
    float balance=5000, amount;

    do{
        printf("\n1.Check Balance");
        printf("\n2.Deposit");
        printf("\n3.Withdraw");
        printf("\n4.Exit");
        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("Balance = %.2f\n",balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f",&amount);
                balance+=amount;
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f",&amount);

                if(amount<=balance){
                    balance-=amount;
                    printf("Please collect cash.\n");
                }
                else
                    printf("Insufficient Balance.\n");

                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice\n");
        }

    }while(choice!=4);

    return 0;
}
