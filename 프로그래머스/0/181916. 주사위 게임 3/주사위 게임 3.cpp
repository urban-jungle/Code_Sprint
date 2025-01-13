#include <string>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int a, int b, int c, int d) {
    vector<int> nums = {a, b, c, d};
    map<int, int> count;

    // 숫자의 빈도를 카운트
    for (int num : nums) {
        count[num]++;
    }

    if (count.size() == 1) {
        // 네 숫자가 모두 같은 경우
        return 1111 * a;
    } else if (count.size() == 2) {
        // 두 종류의 숫자가 있는 경우
        auto it = count.begin();
        int x = it->first, x_count = it->second;
        it++;
        int y = it->first, y_count = it->second;

        if (x_count == 3) {
            return pow(10 * x + y, 2);
        } else if (y_count == 3) {
            return pow(10 * y + x, 2);
        } else {
            return (x + y) * abs(x - y);
        }
    } else if (count.size() == 3) {
        // 세 종류의 숫자가 있는 경우
        for (auto it : count) {
            if (it.second == 2) {
                // 두 번 등장한 숫자를 제외한 두 숫자의 곱
                int product = 1;
                for (auto it2 : count) {
                    if (it2.second == 1) {
                        product *= it2.first;
                    }
                }
                return product;
            }
        }
    } else if (count.size() == 4) {
        // 네 숫자가 모두 다른 경우
        return *min_element(nums.begin(), nums.end());
    }

    return 0;
}
