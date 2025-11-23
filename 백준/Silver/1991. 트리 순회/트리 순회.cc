#include <bits/stdc++.h>
using namespace std;

char l[26],r[26];

void preorder(char cur) {
    if (cur=='.') return;
    cout<<cur;
    preorder(l[cur-'A']);
    preorder(r[cur-'A']);
}

void inorder(char cur) {
    if (cur=='.') return;
    inorder(l[cur-'A']);
    cout<<cur;
    inorder(r[cur-'A']);
}

void postorder(char cur) {
    if (cur=='.') return;
    postorder(l[cur-'A']);
    postorder(r[cur-'A']);
    cout<<cur;
}

int main() {
    cin.tie(0)->sync_with_stdio(0);

    int t;
    cin>>t;
    while (t--) {
        char a,b,c;
        cin>>a>>b>>c;
        l[a-'A']=b;
        r[a-'A']=c;
    }
    preorder('A');
    cout<<"\n";
    inorder('A');
    cout<<"\n";
    postorder('A');
    cout<<"\n";
}