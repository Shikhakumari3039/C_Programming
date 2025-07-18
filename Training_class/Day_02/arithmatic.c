// write menu driven programming 
#include <stdio.h>
void main() {
    int choice;
    float a, b;
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication\n");
    printf("Press 4 for Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice) {
        case 1:
            printf("Enter the value of a and b: ");
            scanf("%f%f", &a, &b);
            printf("Sum = %f\n", a + b);
            break;
        case 2:
            printf("Enter the value of a and b: ");
            scanf("%f%f", &a, &b);
            printf("Subtraction = %f\n", a - b);
            break;
        case 3:
            printf("Enter the value of a and b: ");
            scanf("%f%f", &a, &b);
            printf("Multiplication = %f\n", a * b);
            break;
        case 4:
            printf("Enter the value of a and b: ");
            scanf("%f%f", &a, &b);
            if (b != 0)
                printf("Division = %f\n", a / b);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid choice!\n");
    }
}
