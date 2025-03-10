#include <string>
#include <vector>
#include <map>
using namespace std;

string solution(string s) {
    string answer = "";
    map<char, int> m;
    for(int i = 0; i < s.size(); i++){
        m[s[i]] += 1;
    }
    for(auto j : m){
        if(j.second == 1){
            answer += j.first;
        }
    }
    return answer;
}