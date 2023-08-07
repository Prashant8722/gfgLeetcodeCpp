#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    string s = "the quick brown fox jumps over the lazy dog";
    unordered_map<string, int> freq;
    string word = "";
    for (auto x : s) {
        if (x == ' ') {
            freq[word]++;
            word = "";
        }
        else {
            word = word + x;
        }
    }
    freq[word]++;
    for (auto x : freq) {
        cout << x.first << " " << x.second << endl;
    }
    return 0;
}
