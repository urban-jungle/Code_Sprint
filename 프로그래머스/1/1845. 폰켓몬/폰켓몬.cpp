#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;   
    int N, a;
    for(int i=0; i<N; i++){
        cin >> a;
        nums.push_back(a);
    }
    N = nums.size();
    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    answer = nums.size();
    
    if(answer > N / 2) {
        answer = N / 2;
    }

    return answer;  // 모든 경로에서 반환
}

int main() {
    vector<int> nums;
    int result = solution(nums);
    cout << result;
}