#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *insert(Node *root, int num, char dir);
void preorder(Node *root);
void inorder(Node *root);
void postorder(Node *root);
int count(Node *root);
void search(Node *root, int num);

void preorderNR(Node *root);
void inorderNR(Node *root);
void postorderNR(Node *root);



int main() {
    Node *root = (Node *)malloc(sizeof(Node *));
    root->data = 10;
    insert(root, 20, 'l');
    insert(root, 30, 'r');
    insert(root->left, 40, 'l');
    insert(root->left, 50, 'r');
    insert(root->left->left, 60, 'l');
    insert(root->left->left, 70, 'r');

    inorder(root);

    return 0;
}



Node *insert(Node *root, int num, char dir) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = num;
    temp->left = temp->right = NULL;

    if (dir == 'l') {
        root->left = insert(root->left, num, dir);
    }
    else if (dir == 'r') {
        root->right = insert(root->right, num, dir);
    }

    return root;
}

void preorder(Node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void postorder(Node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

void search(Node *root, int num) {
    if (root == NULL) {
        printf("Empty\n");
    }
    else {
        int *temp = root;
        int cnt_l = 0;
        int cnt_r = 0;
        
        while (root != NULL) {
            root = root->left;
            cnt_l++;
            if (root->data == num) {
                printf("Found");
            }
        }

    }
}

void preorderNR(Node *root) {
    if (root == NULL) {
        printf("Empty\n");
        return ;
    }

    int stk[100], top = -1;
    Node *curr;
    curr = root;
    push(stk, curr->data);
    pop

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