#include <stdio.h>
#include <conio.h>

int revint(int p, int r);

void main() {
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);
    result = revint(n, 0);  // Start the reverse with 0
    printf("The reverse of the number %d is %d", n, result);
    getch();
}

int revint(int p, int r) {
    if (p == 0) {
        return r;
    } else {
        return revint(p / 10, r * 10 + (p % 10));
    }
}
