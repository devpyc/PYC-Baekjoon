#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);

    int n;
    string k,s;
    cin>>k>>s>>n;

    int a=k[0]-'A',b=k[1]-'1',c=s[0]-'A',d=s[1]-'1';

    while(n--){
        string m;
        cin>>m;

        int e=0,f=0;

        if(m=="R")e=1;
        else if(m=="L") e=-1;
        else if(m=="B") f=-1;
        else if(m=="T") f=1;
        else if(m=="RT") {
            e=1;
            f=1;
        } else if(m=="LT") {
            e=-1;
            f=1;
        } else if(m=="RB") {
            e=1;
            f=-1;
        } else if(m=="LB") {
            e=-1;
            f=-1;
        }

        int g=a+e;
        int h=b+f;

        if(g<0||g>7||h<0||h>7) continue;
        if(g==c&&h==d){
            int i=c+e;
            int j=d+f;

            if(i<0||i>7||j<0||j>7) continue;
            c=i;
            d=j;
        }
        a=g;
        b=h;
    }
    cout<<char('A'+a)<<char('1'+b)<<"\n"<<char('A'+c)<<char('1'+d)<<"\n";
}