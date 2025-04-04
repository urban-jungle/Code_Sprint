#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    sort(sides.begin(), sides.end());
    for(int i = 1; i <= sides[1]; i++){
        if(i + sides[0] > sides[1]){
            answer += 1;
        }
    }
    for(int j = sides[1] + 1; j < sides[0] + sides[1]; j++){
        answer += 1;
    }
    return answer;
}