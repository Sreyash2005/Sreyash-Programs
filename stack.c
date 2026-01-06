#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *top = NULL;

void push(int num);
int pop();
int peek();
int isEmpty();
void display();
void add();



int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    printf("Poped item is %d\n", pop());
    printf("Top item is %d\n", peek());

    return 0;
}



void push(int num) {
    if (isEmpty() == 1) {
        top = (Node *)malloc(sizeof(Node));
        top->data = num;
        top->next = NULL;
    }
    else {
        Node *temp = top;

        top = (Node *)malloc(sizeof(Node));
        top->data = num;
        top->next = temp;
    }
}

int pop() {
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
    }
    else {
        Node *temp = top;

        top = top->next;
        return temp->data;
        free(temp);    
    }
}

int peek() {
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
    }
    else {
        return top->data;
    }
}

int isEmpty() {
    if (top == NULL) {
        return 1;
    }
    
    return 0;
}

void display() {
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
    }
    else {
        Node *current = top;

        printf("Elements in stack are\n");
        while (current != NULL) {
            printf("\t%d\n", current->data);
            current = current->next;
        }
    }
}

void add() {
    int x, y, sum;
    x = pop();
    y = pop();

    sum = x + y;

    push(sum);
}