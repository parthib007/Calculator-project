// a user-friendly calculator
#include <stdio.h>
#include <math.h>
// basic functions
// to be used
double add(double a, double b)
{
    return (a + b);
}
double sub(double a, double b)
{
    return (a - b);
}
double mult(double a, double b)
{
    return (a * b);
}
double div(double a, double b)
{
    return (a / b);
}
double to_power(double a, double b)
{
    return (pow(a, b));
}
double ncr(double a, double b)
{
    if (b == 0)
        return 1;
    if (a == b)
        return 1;
    return (ncr(a - 1, b) + ncr(a - 1, b - 1));
}
double sq(double a)
{
    return (pow(a, 2));
}
double sq_root(double a)
{
    return (sqrt(a));
}
double cu_root(double a)
{
    return (cbrt(a));
}
double fact(double a)
{
    if (a == 0 || a == 1)
        return 1;
    return (fact(a - 1) * a);
}
int main()
{
    printf("Use the below table for calculations:\n");
    printf("Number    Functions\n");
    printf("1           Add\n");
    printf("2           Subtract\n");
    printf("3           Multiply\n");
    printf("4           Divide\n");
    printf("5           Power\n");
    printf("6         Combination\n");
    printf("7     Single variable calculation\n");
    double a, b;
    int n, n1, check = 1; // n1 is for single variable functions
    /* I want this calculator to take input from user infinitely
            So started a for loop */
    while (1)
    {
        char ch;
        printf("Do you want to proceed?(Y/N) ");
        scanf("%c", &ch);
        if(ch=='\n'){
            scanf("%c",&ch);
        }
        if (ch == 'N' || ch == 'n')
        {
            printf("Thanks for using this calculator !!");
            break;
        }
        else if (ch == 'Y' || ch == 'y')
        {
            printf("NOTE: For single variable calculations use 0 for 2nd number.\n");
        start1:
            printf("Enter the numbers:\n");
            scanf("%lf\n%lf", &a, &b);
            printf("Enter the number corresponding to the function you want: ");
            scanf("%d", &n);
            switch (n)
            {
            case 1:
                printf("Result is %0.3lf\n", add(a, b));
                break;
            case 2:
                printf("Result is %0.3lf\n", sub(a, b));
                break;
            case 3:
                printf("Result is %0.3lf\n", mult(a, b));
                break;
            case 4:
            {
                if (b == 0.00)
                {
                    printf("Cannot divide by 0. Try again\n");
                    goto start1;
                }
                printf("Result is %0.3lf\n", div(a, b));
            }
            break;
            case 5:
                printf("Result is %0.3lf\n", to_power(a, b));
                break;
            case 6:
            {
                if (b > a)
                {
                    printf("2nd number cannot be greater than 1st number.Try again.\n");
                    goto start1;
                }
                printf("Result is %0.3lf\n", ncr(a, b));
            }
            break;
            case 7:
            {
                if(b!=0){
                    printf("Can't use single-variable calculations. Use 0 for 2nd number.\nTry again\n");
                    goto start1;}
                printf("Number    Function\n");
                printf("1         square\n");
                printf("2         square root\n");
                printf("3         cube root\n");
                printf("4         sin\n");
                printf("5         cos\n");
                printf("6         tan\n");
                printf("7         fact\n");
                printf("Enter what do you want: ");
                scanf("%d", &n1);
                switch (n1)
                {
                case 1:
                    printf("Result is %0.3lf\n", sq(a));
                    break;
                case 2:
                    printf("Result is %0.3lf\n", sq_root(a));
                    break;
                case 3:
                    printf("Result is %0.3lf\n", cu_root(a));
                    break;
                case 4:
                    printf("Result is %0.3lf\n", sin(a));
                    break;
                case 5:
                    printf("Result is %0.3lf\n", cos(a));
                    break;
                case 6:
                    printf("Result is %0.3lf\n", tan(a));
                    break;
                case 7:
                    printf("Result is %0.3lf\n", fact(a));
                    break;
                }
            }
            }
        }
        else
        {
            printf("Please enter Y or N and not anything else\n");
        }
    }
}
