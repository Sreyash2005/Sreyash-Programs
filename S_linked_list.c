#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} Node;

Node *head = NULL;

void append(int num);
void delete(int num);
void display();
void clear();
void contains(int num);
int count();
int index(int indx);
void insert(int num, int indx);
void leftRotate();
void leftShift();
void rightRotate();
void rightShift();
int sum();
float average();



int main() {
    int num, indx;
    append(10);
    append(20);
    append(30);
    append(40);
    append(50);
    append(30);
    display();
    // printf("Enter a value and index: ");
    // scanf("%d %d", &num, &indx);
    // insert(num, indx);
    rightShift();
    display();

    return 0;
}



void append(int num) {
    if (head == NULL) {
        head = (Node *)malloc(sizeof(Node));
        head->data = num;
        head->next = NULL;
    }
    else {
        Node *current = head;

        while (current->next != NULL) {
            current = current->next;
        }
        current->next = (Node *)malloc(sizeof(Node));
        current = current->next;
        current->data = num;
        current->next = NULL;
    }
}

void delete(int num) {
    int found = 0;
    Node *current = head;
    Node *prev = NULL;

    if (head == NULL) {
        printf("No element to delete\n");
    }
    else {
        while (current != NULL) {
            if (current->data == num && prev == NULL) {
                head = current->next;
                found = 1;
                free(current);
            }
            else if (current->data == num) {
                prev->next = current->next;
                found = 1;
                free(current);
            }

            prev = current;
            current = current->next;
        }
    }

    if (found == 0) {
        printf("Element not found\n");
    }
}

void display() {
    if (head == NULL) {
        printf("Khali hai\n");
    }
    else {
        Node *current = head;

        printf("The elements in the linked list are ");
        while (current != NULL) {
            printf("%d ", current->data);
            current = current->next;
        }
    }
    printf("\n");
}

void clear() {
    if (head == NULL) {
        printf("Empty\n");
    } 
    else {
        Node *current = head;

        while (head != NULL) {
            free(current);
            head = head->next;
            current = head;
        }
    }
}

void contains(int num) {
    int found = 0;

    if (head == NULL) {
        printf("Empty\n");
    } 
    else {
        Node *current = head;

        while (current != NULL) {
            if (current->data == num) {
                found++;
            }

            current = current->next;
        }

        if (found == 0) {
            printf("No such element found\n");
        } 
        else {
            printf("%d elements found\n", found);
        }
    }
}

int count() {
    int cnt = 0;

    if (head == NULL) {
        printf("Empty\n");
    } 
    else {
        Node *current = head;

        while (current != NULL) {
            cnt++;
            current = current->next;
        }
    }

    return cnt;
}

int index(int num) {
    int cnt = 0;

    if (head == NULL) {
        printf("Empty\n");
    } 
    else {
        Node *current = head;

        while (current != NULL) {
            if (current->data == num) {
                return cnt;
            }
            current = current->next;
            cnt++;
        }
    }

    return -1;
}

void insert(int num, int indx) {
    int cnt = 0, found = 0;

    if (head == NULL) {
        printf("Empty\n");
    }
    else {
        Node *current = head;
        Node *prev = NULL;

        while (current != NULL) {
            if (cnt == indx) {
                if (current == head) {
                    head = (Node *)malloc(sizeof(Node));
                    head->data = num;
                    head->next = current;
                }
                else {
                    prev->next = (Node *)malloc(sizeof(Node));
                    prev->next->data = num;
                    prev->next->next = current;
                }

                found = 1;
                printf("Inserted successfully\n");
            }
            prev = current;
            current = current->next;
            cnt++;
        }

        if (found == 0) {
            printf("Index not found\n");
        }
    }
}

void leftRotate() {
    if (head == NULL) {
        printf("Empty\n");
    }
    else {
        Node *current = head;
        Node *temp = current;
        head = head->next;

        while (current->next != NULL) {
            current = current->next;
        }

        current->next = temp;
        current->next->next = NULL;
        free(temp);
    }
}

void leftShift() {
    if (head == NULL) {
        printf("Empty\n");
    }
    else {
        Node *current = head;
        Node *temp = current;
        head = head->next;
        free(temp);
    }
}

void rightRotate() {
    if (head == NULL) {
        printf("Empty\n");
    } 
    else {
        Node *current = head;
        Node *temp = current;
        Node *prev = NULL;

        while (current->next != NULL) {
            prev = current;
            current = current->next;
        }

        head = current;
        head->next = temp;
        prev->next = NULL;
        free(temp);
    }
}

void rightShift() {
    if (head == NULL) {
        printf("Empty\n");
    }
    else {
        Node *current = head;
        Node *temp = NULL;

        while (current->next->next != NULL) {
            current = current->next;
        }

        temp = current->next;
        free(temp);
        current->next = NULL;
    }
}

int sum() {
    if (head == NULL) {
        return 0;
    }
    else {
        int sum = 0;
        Node *current = head;

        while (current != NULL) {
            sum += current->data;
            current = current->next;
        }

        return sum;
    }
}

float average() {
    if (head == NULL) {
        return 0;
    }
    else {
        float avg = sum() / (float)count();
        return avg;
    }
}