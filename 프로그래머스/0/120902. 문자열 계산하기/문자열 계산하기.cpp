#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    stringstream ss(my_string);
    ss >> answer;
    
    int num;
    char c;
    while(ss >> c >> num){
        if(c == '+') answer += num;
        else answer -= num;
    }
    
    return answer;
}