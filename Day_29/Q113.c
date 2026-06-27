#include <stdio.h>

int main() {
    int choice;
    float num1, num2, result;

    do {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
        }

        switch (choice) {
            case 1: result = num1 + num2; printf("Result = %.2f\n", result); break;
            case 2: result = num1 - num2; printf("Result = %.2f\n", result); break;
            case 3: result = num1 * num2; printf("Result = %.2f\n", result); break;
            case 4: 
                if (num2 != 0) result = num1 / num2;
                else { printf("Error! Division by zero.\n"); continue; }
                printf("Result = %.2f\n", result); 
                break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
