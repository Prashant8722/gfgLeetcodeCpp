#include <iostream>
using namespace std;

// recursive code
int maxConsecutiveOnesRecursive(string s, int index, int count) {
    if (index == s.length()) {
        return count; // Base case: end of string
    }

    if (s[index] == '1') {
        count++;
    } else {
        count = 0; // Reset count if '0' encountered
    }

    int nextCount = maxConsecutiveOnesRecursive(s, index + 1, count);

    return max(count, nextCount);
}
//Non - recursive code
int maxConsecutiveOnes(string s) {
    int count = 0;
    int res = 0; // or INT_MIN if you expect negative counts

    for (char c : s) {
        if (c == '0') {
            count = 0;
        } else {
            count++;
        }
        res = max(res, count);
    }

    return res;
}


int main() {
    string s;
    cout << "Enter a string of 0s and 1s: ";
    cin >> s;

    int maxCount = maxConsecutiveOnesRecursive(s, 0, 0);

    cout << "Maximum consecutive count of '1's: " << maxCount << endl;

    return 0;
}
