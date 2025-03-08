#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    string ans = "";
    for(int i = 0; i < numbers.size();){
        if(numbers[i] == 'o' && numbers[i+1] == 'n' && numbers[i+2] == 'e'){
            ans += "1";
            i += 3;
        }
        else if(numbers[i] == 't' && numbers[i+1] == 'w' && numbers[i+2] == 'o'){
            ans += "2";
            i += 3;
        }
        else if(numbers[i] == 't' && numbers[i+1] == 'h' && numbers[i+2] == 'r' && numbers[i+3] == 'e' 
                && numbers[i+4] == 'e'){
            ans += "3";
            i += 5;
        }
        else if(numbers[i] == 'f' && numbers[i+1] == 'o' && numbers[i+2] == 'u' && numbers[i+3] == 'r'){
            ans += "4";
            i += 4;
        }
        else if(numbers[i] == 'f' && numbers[i+1] == 'i' && numbers[i+2] == 'v' && numbers[i+3] == 'e'){
            ans += "5";
            i += 4;
        }
        else if(numbers[i] == 's' && numbers[i+1] == 'i' && numbers[i+2] == 'x'){
            ans += "6";
            i += 3;
        }
        else if(numbers[i] == 's' && numbers[i+1] == 'e' && numbers[i+2] == 'v' && numbers[i+3] == 'e' 
                && numbers[i+4] == 'n'){
            ans += "7";
            i += 5;
        }
        else if(numbers[i] == 'e' && numbers[i+1] == 'i' && numbers[i+2] == 'g' && numbers[i+3] == 'h' 
                && numbers[i+4] == 't'){
            ans += "8";
            i += 5;
        }
        else if(numbers[i] == 'n' && numbers[i+1] == 'i' && numbers[i+2] == 'n' && numbers[i+3] == 'e'){
            ans += "9";
            i += 4;
        }
        else if(numbers[i] == 'z' && numbers[i+1] == 'e' && numbers[i+2] == 'r' && numbers[i+3] == 'o'){
            ans += "0";
            i += 4;
        }
    }
    answer += stoll(ans);
    return answer;
}