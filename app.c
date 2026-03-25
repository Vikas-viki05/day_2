#include <stdio.h>


void greetUser() {
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);   

    printf("Hello, %s!\n", name);
}


void addNumbers() {
    int a, b;

    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input! Please enter numbers only.\n");
        return;
    }

    printf("Sum = %d\n", a + b);
}

void showMenu() {
    printf("\n===== MENU =====\n");
    printf("1. Greet User\n");
    printf("2. Add Numbers\n");
    printf("3. Exit\n");
}

int main() {
    int choice;

    printf("Welcome to DevOps C App\n");

    while (1) {
        showMenu();
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input! Please enter a number.\n");
            
            
            while (getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                greetUser();
                break;

            case 2:
                addNumbers();
                break;

            case 3:
                printf("Exiting program...\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
