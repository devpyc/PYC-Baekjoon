#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    if(n%2==1) n+=2;
    for(int i=1; i<n; i+=2){
        answer.push_back(i);
    }
    return answer;
}