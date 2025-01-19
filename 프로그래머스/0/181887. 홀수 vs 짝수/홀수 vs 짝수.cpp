#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    int odd = 0, even = 0;
    for(int i = 0; i < num_list.size(); i++){
        if(i % 2 == 0 || i == 0){
            odd += num_list[i];
        }
        else if(i % 2 == 1){
            even += num_list[i];
        }
    }
    answer = max(odd, even);
    return answer;
}