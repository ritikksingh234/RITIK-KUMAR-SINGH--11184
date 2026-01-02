#include <stdio.h>
#include <string.h>

int main() {
    char storedUsername[] = "Ritik";
    char enteredUsername[20];
    int storedPassword = 15062006;
    int enteredPassword;
    int maxAttempts = 3;
    int attempt;

    printf("=====================================\n");
    printf("      🔐 LOGIN SYSTEM\n");
    printf("=====================================\n");

    for(attempt = 1; attempt <= maxAttempts; attempt++) {

        printf("\nAttempt %d of %d\n", attempt, maxAttempts);

        printf("Enter Username: ");
        scanf("%s", enteredUsername);

        printf("Enter Password: ");
        scanf("%d", &enteredPassword);

        if(strcmp(enteredUsername, storedUsername) == 0 && enteredPassword == storedPassword) {
            printf("\n✅ ACCESS GRANTED!\n");
            printf("Login Successful.\n");
            break;
        } else {
            printf("❌ INVALID USERNAME OR PASSWORD!\n");
            printf("Remaining Attempts: %d\n", maxAttempts - attempt);
        }
    }

    if(attempt > maxAttempts) {
        printf("\n🚫 ACCOUNT LOCKED!\n");
        printf("Too many wrong attempts.\n");
    }

    printf("\n=====================================\n");
    return 0;
}
