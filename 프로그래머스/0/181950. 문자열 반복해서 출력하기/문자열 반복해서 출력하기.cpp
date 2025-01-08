#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string str, str1;
    int n;
    cin >> str >> n;
    for(int i = 0; i<n; i++){
        str1 += str;
    }
    cout << str1;
    return 0;
}