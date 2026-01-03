#include <stdio.h>

int main() {
    int a, b, choice;

    while (1) { 

        printf("\n--- CALCULATOR MENU ---\n"); 
        printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the program. Goodbye!\n");
            return 0; 
        }
        
        if (choice < 1 || choice > 5) {
            printf("Invalid choice! Try again.\n");
            continue;
        }

        printf("Enter first number: ");
        scanf("%d", &a);
        printf("Enter second number: ");
        scanf("%d", &b);

        switch (choice) {
            case 1:
                printf("Result: %d\n", a + b);
                break;
            case 2:
                printf("Result: %d\n", a - b);
                break;
            case 3:
                printf("Result: %d\n", a * b);
                break;
            case 4:
                if (b == 0) {
                    printf("Error: Cannot divide by 0\n");
                } else {
                    printf("Result: %.2f\n", (float)a / b);
                }
                break;
        }
    }

    return 0;
}