#include <stdio.h>
#include <stdlib.h>

void DFS(int n, int adj[n][n], int vrtx);
void BFS(int n, int adj[n][n], int vrtx);


int main() {
    int n, e;
    int v1, v2;
    int start;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int adj[n][n];

    // Initialize adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &e);

    printf("Enter %d directed edges (u v):\n", e);
    printf("Meaning: edge from u → v\n");

    for (int i = 0; i < e; i++) {
        scanf("%d %d", &v1, &v2);
        adj[v1][v2] = 1;    // Directed edge
    }

    printf("Enter starting vertex: ");
    scanf("%d", &start);

    int choice;
    printf("\nChoose Traversal:\n1. DFS\n2. BFS\nEnter: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("DFS Traversal:\n");
                DFS(n, adj, start);
                break;
        case 2: printf("BFS Traversal:\n");
                BFS(n, adj, start);
                break;
        default:printf("Enter valid choice next time\n");
    }

    return 0;
}




void DFS(int n, int adj[n][n], int vrtx) {
    int flag[n], stk[n], x, y, top = -1, i;
    for (i = 0; i < n; i++) {
        flag[i] = 1;
    }

    push(stk, &top, n, vrtx);
    flag[vrtx] = 2;
    while (isEmpty(stk, top) != 1) {
        x = pop(stk, &top);
        flag[x] = 3;
        printf("%d ", x);

        for (i = 0; i < n; i++) {
            if (adj[x][i] == 1) {
                y = i;
                push(stk, &top, n, y);
            }
        }
    }
}

void BFS(int n, int adj[n][n], int vrtx) {
    int flag[n], q[n], x, y, front = 0, rear = 1, i;
    for (i = 0; i < n; i++) {
        flag[i] = 1;
    }

    insertQ(q, &front, &rear, n, vrtx);
    flag[vrtx] = 2;
    while (isEmptyQ(q, front) != 1) {
        x = deleteQ(q, &front, &rear);
        flag[x] = 3;
        printf("%d ", x);

        for (i = 0; i < n; i++) {
            if (adj[x][i] == 1) {
                y = i;
                insertQ(q, &front, &rear, n, y);
            }
        }
    }
}


void push(int stk[], int *top, int max, int num) {
    if (*top == max - 1) {
        printf("Stack is Full\n");
        return;
    }
    (*top)++;
    stk[*top] = num;
}

int pop(int stk[], int *top) {
    if (isEmpty(stk, *top) == 1) {
        printf("Stack is Empty\n");
        return -1;   // Return a sentinel value for empty
    } else {
        int val = stk[*top];
        (*top)--;
        return val;
    }
}

int peek(int stk[], int top) {
    if (isEmpty() == 1) {
        printf("Stack is Empty\n");
        return -1;   // Sentinel value
    } else {
        return stk[top];
    }
}

int isEmpty(int stk[], int top) {
    if (top == -1) {
        return 1;
    }
    return 0;
}

void display(int stk[], int top) {
    if (isEmpty(stk, top) == 1) {
        printf("Stack is Empty\n");
    } else {
        int i;
        printf("Elements in stack are\n");
        for (i = top; i >= 0; i--) {
            printf("\t%d\n", stk[i]);
        }
    }
}

void insertQ(int queue[], int *front, int *rear, int max, int num) {
    if (isFullQ(queue, *rear, max)) {
        printf("Queue is Full\n");
        return;
    }
    (*rear)++;
    queue[*rear] = num;
}

int deleteQ(int queue[], int *front, int *rear) {
    if (isEmpty(queue, *front)) {
        printf("Queue is Empty\n");
        return -1;
    }

    int val = queue[*front];

    if (*front == *rear) {
        *front = *rear = -1;   // Queue becomes empty
    } else {
        (*front)++;           // No shifting, just move front
    }

    return val;
}

int peek(int queue[], int front) {
    if (isEmpty(front)) {
        printf("Queue is Empty\n");
        return -1;
    }
    return queue[front];
}

int isEmptyQ(int queue[], int front) {
    return (front == -1);
}

int isFullQ(int queue[], int rear, int max) {
    return (rear == max - 1);
}

void displayQ(int queue[], int front, int rear) {
    if (isEmpty(front)) {
        printf("Queue is Empty\n");
        return;
    }

    printf("Queue elements:\n");
    for (int i = front; i <= rear; i++) {
        printf("\t%d\n", queue[i]);
    }
}