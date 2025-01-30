#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) {
    vector<string> answer;
    for(int i = 0; i < picture.size(); i++){
        string tmp = "";
        for(int j = 0; j < picture[i].size(); j++){
            for(int x = 0; x < k; x++){
               tmp += picture[i][j];
            }
        }
        for(int q = 0; q < k; q++){
            answer.push_back(tmp);
        }
    }
    return answer;
}