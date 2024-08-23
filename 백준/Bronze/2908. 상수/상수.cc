#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    string a, b;
    int c = 0;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    c = max(stoi(a), stoi(b));
    cout << c << "\n";
}