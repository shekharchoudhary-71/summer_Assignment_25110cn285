#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, hra, da, gross;
};

int main()
{
    struct Employee e[100];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Name: ");
        scanf("%s", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].basic);

        e[i].hra = 0.20 * e[i].basic;
        e[i].da = 0.10 * e[i].basic;
        e[i].gross = e[i].basic + e[i].hra + e[i].da;
    }

    printf("\nSalary Details\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID : %d", e[i].id);
        printf("\nName        : %s", e[i].name);
        printf("\nBasic       : %.2f", e[i].basic);
        printf("\nHRA         : %.2f", e[i].hra);
        printf("\nDA          : %.2f", e[i].da);
        printf("\nGross Salary: %.2f\n", e[i].gross);
    }

    return 0;
}
