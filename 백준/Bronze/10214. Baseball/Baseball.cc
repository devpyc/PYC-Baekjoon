#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int A=0,B=0;
        for(int i=0; i<9; i++){
            int a,b;
            cin>>a>>b;
            A+=a;
            B+=b;
        }
        if(A>B) cout<<"Yonsei\n";
        else if(A<B) cout<<"Korea\n";
        else cout<<"Draw\n";
    }
}