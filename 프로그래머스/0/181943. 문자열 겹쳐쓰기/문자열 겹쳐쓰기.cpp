#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    for (int i = 0; i < overwrite_string.size(); i++) {
        if (s + i < my_string.size()) {
            my_string[s + i] = overwrite_string[i];
        } else {
            break; // 범위를 벗어나면 종료
        }
    }
    return my_string;
}