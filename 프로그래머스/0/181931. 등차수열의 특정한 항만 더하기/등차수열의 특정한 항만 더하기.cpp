#include <string>
#include <vector>

using namespace std;

int solution(int a, int d, vector<bool> included) {
    int answer = 0;
    for(int i = 1; i < included.size() + 1; i++){
        if(included[i-1] == true){
            answer += a + (d * (i - 1));
        }
        else if(included[i-1] == false){
            continue;
        }
    }
    return answer;
}