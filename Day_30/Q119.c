#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int count = 0, choice, i, searchId;

    while (1)
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Delete Employee\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[count].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[count].name);

            printf("Enter Department: ");
            scanf(" %[^\n]", emp[count].department);

            printf("Enter Salary: ");
            scanf("%f", &emp[count].salary);

            count++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No Employee Records Found.\n");
            }
            else
            {
                printf("\nEmployee Details\n");
                for (i = 0; i < count; i++)
                {
                    printf("\nID         : %d", emp[i].id);
                    printf("\nName       : %s", emp[i].name);
                    printf("\nDepartment : %s", emp[i].department);
                    printf("\nSalary     : %.2f\n", emp[i].salary);
                }
            }
            break;

        case 3:
            printf("Enter Employee ID to Search: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == searchId)
                {
                    printf("\nEmployee Found!");
                    printf("\nID         : %d", emp[i].id);
                    printf("\nName       : %s", emp[i].name);
                    printf("\nDepartment : %s", emp[i].department);
                    printf("\nSalary     : %.2f\n", emp[i].salary);
                    break;
                }
            }

            if (i == count)
                printf("Employee Not Found.\n");

            break;

        case 4:
            printf("Enter Employee ID: ");
            scanf("%d", &searchId);

            for (i = 0; i < count; i++)
            {
                if (emp[i].id == searchId)
                {
                    printf("Enter New Salary: ");
                    scanf("%f", &emp[i].salary);
                    printf("Salary Updated Successfully.\n");
                    break;
                }
            }

            if (i == count)
                printf("Employee Not Found.\n");

            break;

        case 5:
            printf("Enter Employee ID to Delete: ");
            scanf("%d", &searchId);

            for (i
