#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> mpp;
    for(char c : s) {
        mpp[c]++;
    }
    if(mpp.size() %2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}