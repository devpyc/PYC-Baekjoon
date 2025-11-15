#include <bits/stdc++.h>
using namespace std;

struct Node {
    int key;
    Node* left;
    Node* right;

    Node(int x):key(x),left(NULL),right(NULL){}
};

Node* insert(Node* root, int key) {
    if (!root) return new Node(key);
    if (key<root->key) root->left=insert(root->left,key);
    else root->right=insert(root->right,key);
    return root;
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<"\n";
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    Node* root=NULL;
    int n;
    while (cin>>n) {
        root=insert(root,n);
    }
    postorder(root);
}