#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *insert(Node *bt, int num, char dir);
void preorder(Node *bt);
void postorder(Node *bt);
void inorder(Node *bt);
int count(Node *bt);
void search(Node *bt, int num);



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



Node *insert(Node *bt, int num, char dir) {
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->data = num;
    temp->left = temp->right = NULL;

    if (dir == 'l') {
        bt->left = insert(bt->left, num, dir);
    }
    else if (dir == 'r') {
        bt->right = insert(bt->right, num, dir);
    }

    return bt;
}

void preorder(Node *bt) {
    if (bt != NULL) {
        printf("%d ", bt->data);
        preorder(bt->left);
        preorder(bt->right);
    }
}

void postorder(Node *bt) {
    if (bt != NULL) {
        postorder(bt->left);
        postorder(bt->right);
        printf("%d ", bt->data);
    }
}

void inorder(Node *bt) {
    if (bt != NULL) {
        inorder(bt->left);
        printf("%d ", bt->data);
        inorder(bt->right);
    }
}

void search(Node *bt, int num) {
    if (bt == NULL) {
        printf("Empty\n");
    }
    else {
        int *temp = bt;
        int cnt_l = 0;
        int cnt_r = 0;
        
        while (bt != NULL) {
            bt = bt->left;
            cnt_l++;
            if (bt->data == num) {
                printf("Found");
            }
        }

    }
}