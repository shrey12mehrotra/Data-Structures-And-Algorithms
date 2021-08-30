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

void preorder(Node *root, vector<int> &v)
{
    if(!root) return;
    cout << root->data << " ";
    preorder(root->left,v);
    preorder(root->right,v);
}

vector<int> preorderTraversal(Node *root)
{
    vector<int> v;
    preorder(root,v);
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
    preorderTraversal(root);
}