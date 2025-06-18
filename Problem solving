
#include <stdio.h>

int main() {
    int size;
    printf("Enter stack size: ");
    scanf("%d", &size);  // Take stack size as input

    int stack[size];  // Declare stack
    int top = -1;     // Initialize top to -1

    int option = 1;  // Loop control variable

    while (option) { // Loop to allow multiple push operations
        // Check for stack overflow
        if (top == size - 1) {
            printf("Stack Overflow! Cannot push more elements.\n");
            break;  // Exit loop if stack is full
        } 

        int push_value;
        printf("Enter value to push: ");
        scanf("%d", &push_value);

        // Push operation
        top++;
        stack[top] = push_value;

        // Print the stack
        printf("Stack after push: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");

        // Ask user if they want to push another value
        printf("Do you want to push another value? (1 for Yes, 0 for No): ");
        scanf("%d", &option);
    }

    return 0;
}
