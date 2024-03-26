#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

typedef struct {
    int items[STACK_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == STACK_SIZE - 1;
}

void push(Stack *s, int value) {
    if (isFull(s)) {
        printf("Stack overflow!\n");
        return;
    }
    s->items[++s->top] = value;
}

int pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return s->items[s->top--];
}

int top(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return s->items[s->top];
}

int dup(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty!\n");
        return -1;
    }
    int value = top(s);
    push(s, value);
    return value;
}

int count(Stack *s) {
    return s->top + 1;
}

int add(Stack *s) {
    if (count(s) < 2) {
        printf("Insufficient elements in stack!\n");
        return -1;
    }
    int x = pop(s);
    int y = pop(s);
    push(s, x + y);
    return x + y;
}
