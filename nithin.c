#include <stdio.h>

// Function to greet user
void greetUser() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
}

// Function to add two numbers
void addNumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

int main() {
    int choice;

    printf("Welcome to DevOps C App\n");

    do {
        printf("\n1. Greet User\n");
        printf("2. Add Numbers\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            greetUser();
        } 
        else if (choice == 2) {
            addNumbers();
        } 
        else if (choice == 3) {
            printf("Exiting...\n");
        } 
        else {
            printf("Invalid choice!\n");
        }

    } while (choice != 3);

    return 0;
}
