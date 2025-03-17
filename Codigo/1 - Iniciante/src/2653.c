/**
* @file 2653.c
*
* Created on 2025-03-16 at 21:33:10
* @author GabrielCampelo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

#define min(a, b) ((a) < (b) ? (a) : (b))
#define max(a, b) ((a) > (b) ? (a) : (b))

#define INF 0x3f3f3f3f
#define LINF 0x3f3f3f3f3f3f3f3fLL

typedef long long ll;
typedef unsigned long long ull;

typedef struct Node {
    struct Node* left;  
    struct Node* right; 
    int is_end;        
} Node;

Node* create_node() {
    Node* node = (Node*)malloc(sizeof(Node));
    node->left = NULL;
    node->right = NULL;
    node->is_end = 0;
    return node;
}

int insert_string(Node* root, const char* str) {
    Node* curr = root;
    int len = strlen(str);
    int add = 0;

    for (int i = 0; i < len; i++) {
        if (str[i] == '(') {
            if (curr->left == NULL) {
                curr->left = create_node();
            }
            curr = curr->left;
        } else if (str[i] == ')') {
            if (curr->right == NULL) {
                curr->right = create_node();
            }
            curr = curr->right;
        }
    }

    if (!curr->is_end) {
        add = 1;
        curr->is_end = 1;
    }

    return add;
}

int main() {
    Node* root = create_node();
    char str[100100]; 
    int qtd = 0;

    while (scanf("%s", str) != EOF) {
        if (insert_string(root, str)) {
            qtd++;
        }
    }

    printf("%d\n", qtd);

    return 0;
}