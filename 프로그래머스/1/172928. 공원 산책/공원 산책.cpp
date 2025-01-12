#include <string>
#include <vector>
#include <utility>
using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer(2, 0);
    vector<int> current;
    vector<pair<int, int>> obstacle;
    
    for(int i = 0; i < park.size(); i++){
        for(int j = 0; j < park[i].size(); j++){
            if(park[i][j] == 'X'){
                obstacle.push_back({i, j});
            }
        }
    }
    
    for (int row = 0; row < park.size(); ++row) {
        for (int col = 0; col < park[row].size(); ++col) {
            if (park[row][col] == 'S') { // 시작점 'S' 발견
                current = {row, col};
                break; // 시작점을 찾으면 루프 종료
            }
        }
        if (!current.empty()){
            break;
        }// 시작점이 발견되었으면 바깥 루프도 종료
    }
    
    for(int i = 0; i < routes.size(); i++){
        char direction = routes[i][0];
        int shifting = stoi(routes[i].substr(2));
        int next0 = current[0];
        int next1 = current[1];
        bool is_invalid = false;
        for(int j = 0; j < shifting; j++){
            if(direction == 'N'){
                next0 -= 1;
            }
            else if(direction == 'S'){
                next0 += 1;
            }
            else if(direction == 'W'){
                next1 -= 1;
            }
            else if(direction == 'E'){
                next1 += 1;
            }
            
            if(next0 >= park.size() || next0 < 0 || next1 >= park[0].size() || next1 < 0){
                is_invalid = true;
                break;
            }
            
            bool is_obstacle = false;
            for(const auto& obs : obstacle){
                if(next0 == obs.first && next1 == obs.second){
                    is_invalid = true;
                }
            }
        }
        if(is_invalid == true){
                continue;
        }

        current[0] = next0;
        current[1] = next1;
    }
    answer = current;
    return answer;
}