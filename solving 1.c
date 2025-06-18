
#include <stdio.h>

int main() {
    int size;
    printf("Enter stack size: ");
    scanf("%d", &size);  // Take stack size as input

    int stack[size];  // Declare stack
    int top = -1;     // Initialize top to -1
    int option;       // Variable for user choice

    while (1) { // Infinite loop to handle multiple operations
        printf("\nChoose operation:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &option);

        if (option == 1) {  // Push Operation
            // Check for stack overflow
            if (top == size - 1) {
                printf("Stack Overflow! Cannot push more elements.\n");
            } else {
                int push_value;
                printf("Enter value to push: ");
                scanf("%d", &push_value);
                top++;
                stack[top] = push_value;
                printf("Stack after push: ");
                for (int i = 0; i <= top; i++) {
                    printf("%d ", stack[i]);
                }
                printf("\n");
            }
        } 
        else if (option == 2) {  // Pop Operation
            // Check for stack underflow
            if (top == -1) {
                printf("Stack Underflow! No elements to pop.\n");
            } else {
                printf("Popped value: %d\n", stack[top]);
                top--; // Decrement top
                
                printf("Stack after pop: ");
                if (top == -1) {
                    printf("Empty Stack\n");
                } else {
                    for (int i = 0; i <= top; i++) {
                        printf("%d ", stack[i]);
                    }
                    printf("\n");
                }
            }
        } 
        else if (option == 3) {  // Exit Operation
            printf("Exiting program...\n");
            break; // Exit the loop
        } 
        else {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
        }
    }

    return 0;
}
