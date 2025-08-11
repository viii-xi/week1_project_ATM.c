#include <stdio.h>

int main() {
    float balance = 0.0;
    float amount;
    int option;

    while (1) {

        printf("\n--- ATM MENU ---\n");
        printf("1. View Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Select option (1-4): ");
        scanf("%d", &option);


        switch (option) {
            case 1:
                printf("\nCurrent Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter deposit amount: Rs. ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposited Rs. %.2f successfully.\n", amount);
                } else {
                    printf("Invalid amount. Deposit must be greater than zero.\n");
                }
                break;

            case 3:
                printf("\nEnter withdraw amount: Rs. ");
                scanf("%f", &amount);
                if (amount <= 0) {
                    printf("Invalid amount. Withdrawal must be greater than zero.\n");
                } else if (amount > balance) {
                    printf("Insufficient balance! You only have Rs. %.2f\n", balance);
                } else {
                    balance -= amount;
                    printf("Withdrew Rs. %.2f successfully.\n", amount);
                }
                break;

            case 4:
                printf("\nThank you for using the ATM. Have a nice day!\n");
                return 0;
            default:
                printf("\nInvalid choice! Please pick between 1-4.\n");
        }
    }

    return 0;
}

