#include <iostream>
#include <unordered_set>
#include <unordered_map>
using namespace std;

int mk_Ns(int N, int count){
    int result = N;
    for (int i = 1; i <= count; i++){
        result = result * 10 + N;
    }
    return result;
}

int solution(int N, int number){
    if (N == number) return 1;

    unordered_map<int, unordered_set<int>> DP;
    DP[0].insert(N);

    for (int k = 1; k < 8; k++){
        DP[k].insert(mk_Ns(N, k));

        for (int i = 0; i < k; i++){
            int j = k - i - 1;

            for (int a : DP[i]){
                for (int b : DP[j]){
                    DP[k].insert(a + b);
                    
                    if (a >= b){
                        DP[k].insert(a - b);
                    }
                    
                    DP[k].insert(a * b);
                    
                    if (b != 0){
                        DP[k].insert(a / b);
                    }
                }
            }
        }

        if (DP[k].find(number) != DP[k].end()){
            return k + 1;
        }
    }

    return -1;
}