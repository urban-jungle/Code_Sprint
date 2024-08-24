#include <iostream>
#include <vector>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;

// 집과 대피소 간의 거리 계산 함수
int calculateDistance(int x1, int y1, int x2, int y2) {
    return abs(x1 - x2) + abs(y1 - y2);
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<pair<int, int>> houses(N);
    for (int i = 0; i < N; i++) {
        cin >> houses[i].first >> houses[i].second;
    }

    vector<int> comb(N, 0);
    fill(comb.end() - K, comb.end(), 1);
    int result = numeric_limits<int>::max();

    // 모든 가능한 대피소 조합을 탐색
    while (next_permutation(comb.begin(), comb.end()))
    {
        vector<int> shelters;
        for (int i = 0; i < N; i++) {
            if (comb[i] == 1) {
                shelters.push_back(i);
            }
        }

        int maxDist = 0;
        // 모든 집에 대해 가장 가까운 대피소와의 거리 계산
        for (int i = 0; i < N; i++) {
            int minDist = numeric_limits<int>::max();
            for (int s : shelters) {
                int dist = calculateDistance(houses[i].first, houses[i].second, houses[s].first, houses[s].second);
                minDist = min(minDist, dist);
            }
            maxDist = max(maxDist, minDist);
        }

        result = min(result, maxDist);
    }

    cout << result << endl;

    return 0;
}