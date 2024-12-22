#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(vector<int> wallet, vector<int> bill) {
    int answer = 0;
    while((*std::min_element(bill.begin(), bill.end()) > *std::min_element(wallet.begin(), wallet.end())) || 
         (*std::max_element(bill.begin(), bill.end()) > *std::max_element(wallet.begin(), wallet.end()))){
        if(bill[0]>=bill[1]){
            bill[0]=floor(bill[0]/2);
            answer += 1;
            }
        else{
            bill[1]=floor(bill[1]/2);
            answer += 1;
            }
        }
    return answer;
}