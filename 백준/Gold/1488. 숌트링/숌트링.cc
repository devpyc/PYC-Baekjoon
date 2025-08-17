#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    long long cntA,cntB,maxA,maxB;
    cin>>cntA>>cntB>>maxA>>maxB;

    if(maxA==0&&maxB==0){
        cout<<0;
        return 0;
    }
    if(maxA==0){
        cout<<min(cntB,maxB);
        return 0;
    }
    if(maxB==0){
        cout<<min(cntA,maxA);
        return 0;
    }

    long long x=cntA,y=cntB,a=maxA,b=maxB;

    auto it=[&](long long A,long long B)->long long{
        if(A<0||B<0) return 0;
        if(A>x||B>y) return 0;

        long long aa=min(x,a*A),bb=min(y,b*B);

        if(A>0&&aa<A) return 0;
        if(B>0&&bb<B) return 0;

        return aa+bb;
    };

    long long ans=0;

    long long r=min(x,y);
    ans=max(ans,it(r,r));

    if(x>0){
        long long B=min(y,x-1),A=B+1;
        ans=max(ans,it(A,B));
    }

    if(y>0){
        long long A=min(x,y-1),B=A+1;
        ans=max(ans,it(A,B));
    }
    cout<<ans;
}