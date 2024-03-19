#include <stdio.h>
#include <stdlib.h> // for memory allocation
#include <math.h>   // for mathematical functions
#include <string.h> // for manipulating strings
#include <time.h>   // for time and date

void clearScreen()
{
    printf("\n\n\n\n\n");
    system("clear");
}

void addition();
void subtraction();
void multiplication();
void division();
void square();
void squareroot();
void power();
void modulus();
void LOG();
void SIN();
void COS();
void TAN();
void Cube();

int main(void)
{
    int choice;

    printf("\n\t SCIENTIFIC CALCULATOR \n\n");

    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square\n");
    printf("6. Squareroot\n");
    printf("7. Power\n");
    printf("8. Modulus\n");
    printf("9. LOG\n");
    printf("10. SIN\n");
    printf("11. COS\n");
    printf("12. TAN\n");
    printf("13. Cube\n");
    printf("14. Exit\n");
    printf("Please choose an operator: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        addition();
        break;
    case 2:
        subtraction();
        break;
    case 3:
        multiplication();
        break;
    case 4:
        division();
        break;
    case 5:
        square();
        break;
    case 6:
        squareroot();
        break;
    case 7:
        power();
        break;
    case 8:
        modulus();
        break;
    case 9:
        LOG();
        break;
    case 10:
        SIN();
        break;
    case 11:
        COS();
        break;
    case 12:
        TAN();
        break;
    case 13:
        Cube();
        break;
    case 0:
        exit(0);
        break;
    default:
        printf("Please enter a valid operator\n");
        break;
    }

    return 0;
}
void addition()
{
    int a, b;
    printf("Enter the numbers you want to add: ");
    scanf("%d %d", &a, &b);
    printf("Sum=%d\n", a + b);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void subtraction()
{
    clearScreen();
    int a, b;
    printf("Enter the numbers you want to subtract: ");
    scanf("%d %d", &a, &b);
    printf("Difference=%d\n", a - b);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void multiplication()
{
    clearScreen();
    int a, b;
    printf("Enter the numbers you want to multiply: ");
    scanf("%d %d", &a, &b);
    printf("Multiplication=%d\n", a * b);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void division()
{
    clearScreen();
    int a, b;
    printf("Enter the numbers you want to divide: ");
    scanf("%d %d", &a, &b);
    printf("Division=%.2f\n", (float)a / (float)b);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void square()
{
    clearScreen();
    int a;
    printf("Enter the number you want to square: ");
    scanf("%d", &a);
    printf("Square=%d\n", a * a);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void squareroot()
{
    clearScreen();
    double b;
    printf("Enter the number you want to find the squareroot of: ");
    scanf("%lf", &b);
    double res = sqrt(b);
    printf("Square root=%lf\n", res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}
void power()
{
    double a, b;
    printf("Enter the base and the power: ");
    scanf("%lf %lf", &a, &b);
    double res = pow(a, b);
    printf("power= %f\n", res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void modulus()
{
    clearScreen();
    int a, b;
    printf("Enter the numbers you want to mudulus: ");
    scanf("%d %d", &a, &b);
    printf("modulus = %d\n", a % b);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void Cube()
{
    clearScreen();
    double a;
    printf("Enter the number you want to cube: ");
    scanf("%lf", &a);
    double res = pow(a, 3);
    printf("cube= %lf", res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}
void SIN()
{
    clearScreen();
    double a;
    printf("Enter the value");
    scanf("%lf", &a);
    double res = sin(a);
    printf("sin(%lf)=%.2lf\n", a, res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void COS()
{
    clearScreen();
    double b;
    printf("Enter the value: ");
    scanf("%lf", &b);
    double res = cos(b);
    printf("col(%lf)=%.2lf\n", b, res);
    printf("\nDo you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}
void TAN()
{
    clearScreen();
    double a;
    printf("Enter value: ");
    scanf("%lf", &a);
    double res = tan(a);
    printf("tan(%lf)=%.2lf\n", a, res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}

void LOG()
{
    clearScreen();
    double a;
    printf("Enter value: ");
    scanf("%lf", &a);
    double res = log10(a);
    printf("log(%lf)=%.2lf\n", a, res);
    printf("Do you want to make another operation[y/n]");
    char entry;
    scanf(" %c", &entry);

    if (entry == 'y' || entry == 'Y')
    {
        main();
    }
    else if (entry == 'n' || entry == 'N')
    {
        printf("Exiting the program...\n");
        exit(0);
    }
    else
    {
        printf("Invalid input, exiting the program...\n");
        exit(0);
    }
}