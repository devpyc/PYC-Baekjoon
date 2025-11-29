#include <iostream>
int main() {
    int a,b;
    std::cin>>a>>b;
    std::cout<<(a>0&&b>0?1:(a<0&&b>0?2:(a<0&&b<0?3:4)));
}