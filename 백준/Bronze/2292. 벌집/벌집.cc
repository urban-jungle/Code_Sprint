#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int N;
    int max = 1;
    int ret = 1;
    int add = 6;
    cin >> N;

    while(1){
        if(N<=max){
            break;
        }
        max += add;
        add += 6;
        ++ret;
    }
    
    cout << ret;
}