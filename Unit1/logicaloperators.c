#include <stdio.h>

int main() {
    // Variables representing credentials/conditions for a user
    int has_username = 1;     // 1 = True (User entered a valid username)
    int has_password = 0;     // 0 = False (User entered a wrong password)
    int is_admin = 1;         // 1 = True (User is an admin account)
    int account_locked = 0;   // 0 = False (Account is active)

    printf("--- Logical Operators Demo ---\n");
    printf("Status: has_username=%d, has_password=%d, is_admin=%d, account_locked=%d\n\n", 
            has_username, has_password, is_admin, account_locked);

    // 1. Logical AND (&&) - Returns 1 only if BOTH sides are true
    // Task: Log in standard user (needs username AND password)
    printf("--- Logical AND (&&) ---\n");
    if (has_username && has_password) {
        printf("Result: Login successful as standard user.\n");
    } else {
        printf("Result: Login failed. Username and password must both be valid.\n");
    }

    // 2. Logical OR (||) - Returns 1 if AT LEAST ONE side is true
    // Task: Grant bypass access if user has right password OR is an admin
    printf("\n--- Logical OR (||) ---\n");
    if (has_password || is_admin) {
        printf("Result: Access granted. (Passed either password check or admin check).\n");
    } else {
        printf("Result: Access denied. Must be an admin or have the correct password.\n");
    }

    // 3. Logical NOT (!) - Reverses the state (True becomes False, False becomes True)
    // Task: Check if the account is active (NOT locked)
    printf("\n--- Logical NOT (!) ---\n");
    if (!account_locked) {
        printf("Result: Account is active and unlocked.\n");
    } else {
        printf("Result: Account is suspended/locked.\n");
    }

    // Combining operators
    printf("\n--- Combining Operators ---\n");
    // Allowed in if: User has valid login (username AND password) AND the account is NOT locked
    if ((has_username && has_password) && !account_locked) {
        printf("Result: Full ecosystem access allowed.\n");
    } else {
        printf("Result: Full ecosystem access blocked.\n");
    }

    return 0;
}

/* • Short-Circuit Evaluation: C optimization skips evaluating the second condition if the outcome is already guaranteed:
	• For &&, if the left side is false, the right side is never evaluated (because the whole expression is already false).
	• For ||, if the left side is true, the right side is never evaluated (because the whole expression is already true).
• Precedence Order: When mixed without parentheses, ! has the highest priority, followed by &&, and then ||. It is always safest to use parentheses () to clarify your logic layout.
*/