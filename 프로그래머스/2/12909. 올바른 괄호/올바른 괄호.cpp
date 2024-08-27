#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solution(string s)
{
    int cnt=0;
    bool answer = true;
    for(auto& c : s){
        if(c == '('){
            cnt++;
        }
        else if(c == ')'){
            cnt--;
            if(cnt<0){
                answer = false;
            }
        }
    }
    if(cnt !=0){
        answer = false;
    }
    return answer;
}