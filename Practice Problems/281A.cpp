#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    string temp = s.substr(0, 1);
    string temp1 = s.substr(1);
    transform(temp.begin(), temp.end(), temp.begin(), ::toupper);
    s.clear();
    s = temp + temp1;
    cout << s;
}