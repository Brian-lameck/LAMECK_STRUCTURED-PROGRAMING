#include <stdio.h>
#include <string.h>

int main() {
    char name[100];  // Buffer to store the string
    int length;

    // Ask user to enter a string
    printf("Enter your name: ");
    scanf("%s", name);  // Reads a single word (no spaces)

    // Print the string back
    printf("You entered: %s\n", name);

    // Find and display the length
    length = strlen(name);
    printf("Length of the string: %d characters\n", length);

    return 0;
}
