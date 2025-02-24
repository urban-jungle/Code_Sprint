#include <vector>

using namespace std;

int solution(int n){
    int answer = 0;
    int fact = 1;
    
    for(int j = 1; fact <= n; j++){
        fact *= j;
        if (fact > n) break;
        answer = j;
    }
    
    return answer;
}