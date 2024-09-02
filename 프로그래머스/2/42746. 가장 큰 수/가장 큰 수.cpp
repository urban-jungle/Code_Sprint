#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(string a, string b) {
    return a + b > b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> strings;
    for(auto& n : numbers){
        strings.push_back(to_string(n));
    }
    sort(strings.begin(), strings.end(), cmp);
    if(strings.at(0) == "0"){
        return "0";
    }
    for(auto& s : strings){
        answer += s;
    }
    return answer;
}