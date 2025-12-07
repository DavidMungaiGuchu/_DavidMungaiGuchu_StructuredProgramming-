#include <stdio.h>
float balance = 1000.0;
int login();
void showMenu();
void checkBalance();
void deposit(float amount);
void withdraw(float amount);
int main() {
    int choice;
    float amount;
    if (login() == 0) {
        printf("Access Denied. Exiting...\n");
        return 0;
    }
    do {
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0)
                    deposit(amount);
                else
                    printf("Amount must be positive.\n");
                break;
            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Amount must be positive.\n");
                }
                else if (amount > balance) {
                    printf("Insufficient balance!\n");
                }
                else {
                    withdraw(amount);
                }
                break;
            case 4:
                printf("Thank you for using the ATM.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while(choice != 4);
    return 0;
}
int login() {
    int storedPIN = 1234;
    int userPIN;
    int attempts = 0;
    while(attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &userPIN);
        if (userPIN == storedPIN) {
            printf("Login Successful!\n\n");
            return 1;
        }
        else {
            printf("Wrong PIN. Try again.\n");
            attempts++;
        }
    }

    return 0; 
}
void showMenu() {
    printf("\n----- ATM MENU -----\n");
    printf("1. Balance Inquiry\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
}

void checkBalance() {
    printf("Your current balance is: %.2f\n", balance);
}
void deposit(float amount) {
    balance += amount;
    printf("Deposit successful! New balance: %.2f\n", balance);
}
void withdraw(float amount) {
    balance -= amount;
    printf("Withdrawal successful! New balance: %.2f\n", balance);
}
