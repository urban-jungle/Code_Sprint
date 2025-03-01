#include <string>
#include <unordered_set>

using namespace std;

string solution(string my_string){
    string answer = "";
    unordered_set<char> seen;

    for(char c : my_string){
        if(seen.find(c) == seen.end()){
            answer += c;
            seen.insert(c);
        }
    }
    return answer;
}