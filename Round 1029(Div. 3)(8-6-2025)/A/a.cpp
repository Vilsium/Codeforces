#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string willCross(vector<int>& doors, int n, int x) {
    if(n == x) return "YES";
    int breakingIdx = -1;
    for(int i = 0; i < n; i++) {
        if(doors[i] == 1) {
            breakingIdx = i;
            break;
        }
    }
    while(x--) {
        if(breakingIdx == n-1) return "YES";
        breakingIdx++;
    }
    for(int i = breakingIdx; i < n; i++) {
        if(doors[i] == 1) return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> doors(n);
        for(int i = 0; i < n; i++) {
            cin >> doors[i];
        }
        cout << willCross(doors, n, x) << endl;
    }
}