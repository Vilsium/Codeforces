#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string mirrorString(string a) {
    string result = "";
    for(char c : a) {
        if(c == 'p') result += 'q';
        else if(c == 'q') result += 'p';
        else result += 'w';
    }
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        cout << mirrorString(a) << endl;
    }
}