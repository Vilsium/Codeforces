#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

string isPerfectMelody(vector<int>& notes) {
    int n = notes.size();
    bool flag = true;
    for(int i = 0; i < n-1; i++) {
        int diff = abs(notes[i+1] - notes[i]);
        if(diff == 5 || diff == 7) continue;
        else {
            flag = false;
            break;
        }
    }
    if(!flag) return "No";
    return "Yes";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int noOfNotes;
        cin >> noOfNotes;
        vector<int> notes(noOfNotes);
        for(int i = 0; i < noOfNotes; i++) {
            cin >> notes[i];
        }
        string response = isPerfectMelody(notes);
        cout << response << endl;
    }
}