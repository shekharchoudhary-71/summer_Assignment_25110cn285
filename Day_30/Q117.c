#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, searchRoll;
    int count = 0;

    while (1)
    {
        printf("\n===== STUDENT RECORD SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("How many students to add: ");
            scanf("%d", &n);

            for (i = 0; i < n; i++)
            {
                printf("\nStudent %d\n", count + 1);

                printf("Enter Roll No: ");
                scanf("%d", &s[count].roll);

                printf("Enter Name: ");
                scanf(" %[^\n]", s[count].name);

                printf("Enter Marks: ");
                scanf("%f", &s[count].marks);

                count++;
            }
            break;

        case 2:
            if (count == 0)
            {
                printf("No student records found.\n");
            }
            else
            {
                printf("\nStudent Records:\n");
                printf("--------------------------------------\n");
                for (i = 0; i < count; i++)
                {
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    printf("--------------------------------------\n");
                }
            }
            break;

        case 3:
            printf("Enter Roll No to search: ");
            scanf("%d", &searchRoll);

            for (i = 0; i < count; i++)
            {
                if (s[i].roll == searchRoll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll No : %d\n", s[i].roll);
                    printf("Name    : %s\n", s[i].name);
                    printf("Marks   : %.2f\n", s[i].marks);
                    break;
                }
            }

            if (i == count)
                printf("Student not found.\n");

            break;

        case 4:
            printf("Thank You!\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }
    }

    return 0;
}
