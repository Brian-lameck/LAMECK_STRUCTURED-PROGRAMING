#include <stdio.h>
#include <stdlib.h>

// Global account balance
float balance = 1000.0;
const int MAX_ATTEMPTS = 3;
const int PIN = 1234;

// Function declarations
int login();
void showMenu();
void checkBalance();
void deposit();
void withdraw();

int main() {
    if (!login()) {
        printf("Access denied. Exiting program.\n");
        return 0;
    }

    int choice;
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}

// Login function with PIN verification
int login() {
    int enteredPin, attempts = 0;

    while (attempts < MAX_ATTEMPTS) {
        printf("Enter your 4-digit PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == PIN) {
            printf("Login successful.\n\n");
            return 1;
        } else {
            attempts++;
            printf("Incorrect PIN. Attempts remaining: %d\n", MAX_ATTEMPTS - attempts);
        }
    }

    return 0;
}

// Display ATM menu
void showMenu() {
    printf("\n--- ATM Menu ---\n");
    printf("1. Check Balance\n");
    printf("2. Deposit Money\n");
    printf("3. Withdraw Money\n");
    printf("4. Exit\n");
}

// Check balance
void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

// Deposit money
void deposit() {
    float amount;
    printf("Enter amount to deposit: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Deposit amount must be positive.\n");
    } else {
        balance += amount;
        printf("$%.2f deposited successfully.\n", amount);
        checkBalance();
    }
}

// Withdraw money
void withdraw() {
    float amount;
    printf("Enter amount to withdraw: ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("Withdrawal amount must be positive.\n");
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        balance -= amount;
        printf("$%.2f withdrawn successfully.\n", amount);
        checkBalance();
    }
}
