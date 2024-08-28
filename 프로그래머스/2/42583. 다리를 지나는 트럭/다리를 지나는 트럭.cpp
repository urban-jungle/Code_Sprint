#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    queue<int> bridge;
    int cur = 0;
    for (int i = 0; i < bridge_length; i++) {
        bridge.push(0);
    }
    while(!truck_weights.empty() || cur > 0){
        answer++;
        cur = cur - bridge.front();
        bridge.pop();
        if(!truck_weights.empty()){
            if((cur + truck_weights[0]) <= weight){
                cur += truck_weights[0];
                bridge.push(truck_weights[0]);
                truck_weights.erase(truck_weights.begin());
            }
            else{
                bridge.push(0);
            }
        }
    }
    return answer;
}