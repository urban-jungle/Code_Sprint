#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> result;
    for (const auto& query : queries) {
        int i = query[0];
        int j = query[1];
        int k = query[2];
        int minValue = -1;
        for (int idx = i; idx <= j; ++idx) {
            if (arr[idx] > k) {
                if (minValue == -1 || arr[idx] < minValue) {
                    minValue = arr[idx];
                }
            }
        }
        result.push_back(minValue);
    }
    return result;
}
