#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) {
    int answer = 0;
    
    for(int i = 0; i < rank.size(); i++){
        if(attendance[i] == false){
            rank[i] = rank.size() + 1;
        }
    }
    
    int a = min_element(rank.begin(), rank.end()) - rank.begin();
    rank[a] = rank.size() + 1;
    
    int b = min_element(rank.begin(), rank.end()) - rank.begin();
    rank[b] = rank.size() + 1;
    
    int c = min_element(rank.begin(), rank.end()) - rank.begin();
    rank[c] = rank.size() + 1;
    
    answer = 10000 * a + 100 * b + c;
    return answer;
}