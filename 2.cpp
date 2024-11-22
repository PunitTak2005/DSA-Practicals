#include <stdio.h>

int main() 
{
    int array[100], n, c, t, end;

    // Input the size of the array
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);

    // Input the array elements
    printf("Enter the elements of the array:\n");
    for (c = 0; c < n; c++) {
        scanf("%d", &array[c]);
    }

    end = n - 1; // Set the index of the last element

    // Reversing the array
    for (c = 0; c < n / 2; c++) {
        t = array[c];
        array[c] = array[end];
        array[end] = t;
        end--;
    }

    // Print the reversed array
    printf("Reversed array elements are:\n");
    for (c = 0; c < n; c++) {
        printf("%d\n", array[c]);
    }

    return 0;
}
