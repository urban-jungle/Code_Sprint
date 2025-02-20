#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> c;
    for(int i = 1; i <= n; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt += 1;
            }
        }
        c.push_back(cnt);
    }
    
    for(int k = 0; k < c.size(); k++){
        if(c[k] >= 3){
            answer += 1;
        }
    }
    return answer;
}