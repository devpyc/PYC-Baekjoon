#include <iostream>

using namespace std;

int gcd(int a, int b) { // 유클리드 호제법을 이용한 최대공약수를 구하는 함수 // 
    int c = a % b; // c는 a를 b로 나눈 나머지를 저장한다. // 
    while (c != 0) { // c가 0이될때까지 반복한다. // 
        a = b; // c가 0이 아니라면 a를 b로 대체한다. // 
        b = c; // c가 0이 아니라면 b를 c로 대체한다. // 
        c = a % b; // c가 0이 아니라면 c를 a와 b로 나눈 나머지로 대체한다. // 
    }
    return b; // 함수를 호출하면 입력 받은 두 정수의 최대 공약수를 반환한다. // 
}
int lcm(int a, int b) { // 최소공배수를 구하는 함수 // 
    return (a * b) / gcd(a, b); // a와 b를 곱한 값을 gcd 함수로 구한 최대공약수로 나누면 최소공배수가 나온다. // 
}
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
    	int a, b, c;
    	cin>>a>>b; // 두 개의 정수를 입력 받는다. // 
    	c=lcm(a,b); // c에 최소공배수를 구하는 함수인 lcm 함수를 사용하여 값을 대입한다. // 
    	cout<<c<<endl; // 두 개의 정수의 최소공배수 출력 // 
	}
}