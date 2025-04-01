#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int row = abs(max({dots[0][0], dots[1][0], dots[2][0], dots[3][0]}) 
              - min({dots[0][0], dots[1][0], dots[2][0], dots[3][0]}));
    int col = abs(max({dots[0][1], dots[1][1], dots[2][1], dots[3][1]})
              - min({dots[0][1], dots[1][1], dots[2][1], dots[3][1]}));
    answer = row * col;
    return answer;
}