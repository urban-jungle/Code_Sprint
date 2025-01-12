#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(int a = 0; a < queries.size(); a++){
        for(int i = 0; i < arr.size(); i++){
            if(i >= queries[a][0] && i <= queries[a][1] && i % queries[a][2] == 0){
                arr[i]++;
            }
            else{
                continue;
            }
        }
    }
    answer = arr;
    return answer;
}