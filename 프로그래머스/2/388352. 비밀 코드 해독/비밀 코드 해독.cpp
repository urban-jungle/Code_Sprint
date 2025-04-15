#include <string>
#include <vector>
#include <algorithm>
#include <bitset>
#include <numeric>

using namespace std;

int solution(int n, vector<vector<int>> q, vector<int> ans){
    int answer = 0;

    vector<bitset<31>> qbit;
    for (auto& v : q){
        bitset<31> b;
        for (int x : v) b.set(x);
        qbit.push_back(b);
    }

    vector<int> nums(n);
    iota(nums.begin(), nums.end(), 1);

    vector<int> mask(n, 0);
    fill(mask.end() - 5, mask.end(), 1);

    do {
        bitset<31> cand;
        for (int i = 0; i < n; ++i){
            if (mask[i]){
                cand.set(nums[i]);
            }
        }

        bool valid = true;
        for (int i = 0; i < q.size(); ++i){
            int match = (cand & qbit[i]).count();
            if (match != ans[i]){
                valid = false;
                break;
            }
        }

        if (valid) answer++;

    }while (next_permutation(mask.begin(), mask.end()));

    return answer;
}
