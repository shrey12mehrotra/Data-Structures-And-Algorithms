#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *left,*right;

    Node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};

void inorder(Node *root, vector<int> &v)
{
    if(!root) return;
    inorder(root->left,v);
    cout << root->data << " ";
    inorder(root->right,v);
}

vector<int> inorderTraversal(Node *root)
{
    vector<int> v;
    inorder(root,v);
    return v;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    inorderTraversal(root);
}