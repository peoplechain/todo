#include <stdio.h>
#include <string.h>

int validate_input(char input[]) {
    // Loop through each character to check for spaces
    for (int i = 0; i < strlen(input); i++) {
        if (input[i] == ' ') {
            return 1; // Space found
        }
    }
    return 0; // No space found
}

int main() {
    char input[100];

    // Prompt the user for input
    printf("Please enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove newline character from fgets
    input[strcspn(input, "\n")] = 0;

    // Validate the input
    if (validate_input(input)) {
        printf("The input contains spaces.\n");
    } else {
        printf("The input does not contain spaces.\n");
    }

    return 0;
}
