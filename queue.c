#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *front = NULL;
Node *rear = NULL;

void insert(int num);
int delete();
int peekFront();
int peekRear();
int isEmpty();
void display();



int main() {
    insert(10);
    insert(20);
    insert(30);
    insert(40);
    insert(50);
    display();

    return 0;
}



void insert(int num) {
    if (isEmpty() == 1) {
        front = (Node *)malloc(sizeof(Node));
        front->data = num;
        front->next = NULL;
        rear = front;
    }
    else {
        rear->next = (Node *)malloc(sizeof(Node));
        rear = rear->next;
        rear->data = num;
        rear->next = NULL;
    }
}

int delete() {
    if (isEmpty() == 1) {
        printf("No queue\n");
    }
    else {
        Node *temp = front;
        int tmp = front->data;

        front = front->next;
        free(temp);
        return tmp;
    }
} 

int peekFront() {
    if (isEmpty() == 1) {
        printf("No queue\n");
    }
    else {
        return front->data;
    }
}

int peekRear() {
    if (isEmpty() == 1) {
        printf("No queue\n");
    }
    else {
        return rear->data;
    }
}

int isEmpty() {
    if (front == NULL && rear == NULL) {
        return 1;
    }

    return 0;
}

void display() {
    if (isEmpty() == 1) {
        printf("No queue\n");
    }
    else {
        Node *current = front;

        printf("Elements in queue are:\n\t");
        while (current != NULL) {
            printf("%d  ", current->data);
            current = current->next;
        }
    }
}