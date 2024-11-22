#include <stdio.h>

// Function to reverse the digits of an integer
int revint(int p, int r);

int main() {
    int n, result;

    // Prompt the user for input
    printf("Enter the number: ");
    scanf("%d", &n);

    // Reverse the number
    result = revint(n, 0);  // Start the reverse with 0

    // Display the result
    printf("The reverse of the number %d is %d\n", n, result);

    return 0;
}

// Recursive function to reverse the digits of an integer
int revint(int p, int r) {
    if (p == 0) {
        return r;
    } else {
        return revint(p / 10, r * 10 + (p % 10));
    }
}
