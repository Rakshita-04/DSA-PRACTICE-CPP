/* First leftmostNot Repeating Character index
Q. Given the string find the leftmost character that is not-repeating.
Efficient Approach for finding leftmost character is not-repeating
*/
#include<iostream>
#include<climits>
#include<cstring>
using namespace std;

int leftMostNotRepeat(string str) {
    int count[256];
    
    // Initialize all elements to -1
    for (int i = 0; i < 256; i++) {
        count[i] = -1;
    }

    // First pass: mark first index or mark as repeated
    for (int i = 0; i < str.length(); i++) {
        if (count[str[i]] == -1) {
            count[str[i]] = i;  // store index
        } else {
            count[str[i]] = -2;  // mark as repeated
        }
    }

    int res = INT_MAX;
    for (int i = 0; i < 256; i++) {
        if (count[i] >= 0) {
            res = min(res, count[i]);
        }
    }

    return (res == INT_MAX) ? -1 : res;
}

int main() {
    string str;
    cout << "Enter first string : ";
    getline(cin, str);

    int index = leftMostNotRepeat(str);
    if (index != -1)
        cout << "Leftmost not repeating character is '" << str[index] << "' at index " << index << endl;
    else
        cout << "All characters are repeating." << endl;

    return 0;
}
