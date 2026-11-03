#include <stdio.h>
#define MAX 5  // maximum size of stack

int stack[MAX];  // array to hold stack elements
int top = -1;    // initially the stack is empty

// Function to push an element
void push(int item) {
    if (top == MAX - 1) {
        printf("Stack Overflow! Cannot push %d\n", item);
    } else {
        top = top + 1;
        stack[top] = item;
        printf("%d pushed into the stack.\n", item);
    }
}

// Function to pop an element
int pop() {
    if (top == -1) {
        printf("Stack Underflow! Cannot pop.\n");
        return -1;
    } else {
        int item = stack[top];
        top = top - 1;
        printf("%d popped from the stack.\n", item);
        return item;
    }
}

// Function to peek at the top element
int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        printf("Top element is: %d\n", stack[top]);
        return stack[top];
    }
}

// Function to check if the stack is empty
int isEmpty() {
    if (top == -1) {
        printf("Stack is empty.\n");
        return 1;
    } else {
        printf("Stack is NOT empty.\n");
        return 0;
    }
}

// Function to get the current size of the stack
int size() {
    printf("Current stack size: %d\n", top + 1);
    return top + 1;
}

// Main function to test all stack operations
int main() {
    push(10);
    push(20);
    push(30);
    peek();          // Should print 30
    size();          // Should print 3
    pop();           // Should remove 30
    peek();          // Should now show 20
    isEmpty();       // Should return 0 (false)
    pop();
    pop();
    pop();           // Should give Underflow warning
    isEmpty();       // Should return 1 (true)
    size();          // Should print 0
    return 0;
}