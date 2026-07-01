#include <stdio.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book b[100];
    int count = 0, choice, i, searchId;

    while (1)
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Book ID: ");
            scanf("%d", &b[count].id);

            printf("Enter Book Name: ");
            scanf(" %[^\n]", b[count].name);

            printf("Enter Author Name: ");
            scanf(" %[^\n]", b[count].author);

            printf("Enter Quantity: ");
            scanf("%d", &b[count].quantity);

            count++;
            printf("Book Added Successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No Books Available.\n");
            }
            else
            {
                printf("\nBook Records:\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nBook ID : %d", b[i].id);
                    printf("\nBook Name : %s", b[i].name);
                    printf("\nAuthor : %s", b[i].author);
                    printf("\nQuantity : %d\n", b[i].quantity);
                }
            }
            break;

        case 3:
            printf("Enter Book ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (b[i].id == searchId)
                {
                    printf("\nBook Found!");
                    printf("\nBook Name : %s", b[i].name);
                    printf("\nAuthor : %s", b[i].author);
                    printf("\nQuantity : %d\n", b[i].quantity);
                    break;
                }
            }
            if (i == count)
                printf("Book Not Found.\n");
            break;

        case 4:
            printf("Enter Book ID to Issue: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (b[i].id == searchId)
                {
                    if (b[i].quantity > 0)
                    {
                        b[i].quantity--;
                        printf("Book Issued Successfully.\n");
                    }
                    else
                        printf("Book Out of Stock.\n");
                    break;
                }
            }
            break;

        case 5:
            printf("Enter Book ID to Return: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (b[i].id == searchId)
                {
                    b[i].quantity++;
                    printf("Book Returned Successfully.\n");
                    break;
                }
            }
            break;

        case 6:
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
