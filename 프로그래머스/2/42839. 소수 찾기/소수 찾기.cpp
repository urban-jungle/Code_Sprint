#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <set>
using namespace std;

bool isPrime(int n){
    if(n <= 1){
        return false;
    }
    else{
        for(int i = 2; (i * i) <= n; i++){
            if((n % i) == 0){
                return false;
            }
        }
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    set<int> s;
    sort(numbers.begin(), numbers.end());
    
    do{
        for (int i = 1; i <= numbers.size(); i++){
            int num = stoi(numbers.substr(0, i));
            if (isPrime(num)){
                s.insert(num);
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    
    answer = s.size();
    return answer;
}