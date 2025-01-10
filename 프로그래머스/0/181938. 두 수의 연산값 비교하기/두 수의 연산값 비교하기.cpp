#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string sa = to_string(a);
    string sb = to_string(b);
    if(stoi(sa+sb) == (2*a*b)){
        answer = stoi(sa+sb);
    }
    else{
        answer = max(stoi(sa+sb), (2*a*b));
    }
    return answer;
}