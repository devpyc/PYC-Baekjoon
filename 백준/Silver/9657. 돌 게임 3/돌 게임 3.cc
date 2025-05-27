#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%7==0||n%7==2) {
        cout<<"CY";
    }else {
        cout<<"SK";
    }
}