#include <iostream>
using namespace std;
#define null NULL

struct node
{
    int key;
    node *left;
    node *right;

    node(int val)
    {
        key = val;
        left = right = null;
    }
};

void printInOrder(node *root);

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);

    printInOrder(root);
}

void printInOrder(node *root)
{
    if (root != null)
    {
        printInOrder(root->left);
        cout << root->key << " ";
        printInOrder(root->right);
    }
}