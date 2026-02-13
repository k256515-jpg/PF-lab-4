include <stdio.h>
int main() {
    int choice;
    printf("1. Balance Inquiry\n");
    printf("2. Withdraw Money\n");
    printf("3. Deposit Money\n");
    printf("4. Exit\n");
    printf("Enter user choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Balance Inquiry Selected\n");
            break;
        case 2:
            printf("Withdraw Money Selected\n");
            break;
        case 3:
            printf("Deposit Money Selected\n");
            break;
        case 4:
            printf("Exit Selected\n");
            break;
        default:
            printf("Invalid choice\n"); 
    }

    return 0;
}
