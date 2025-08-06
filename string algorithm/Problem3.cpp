/* First leftmost Non Repeating Character index
Q. Given the string, find the leftmost character that is non-repeating.
By Counting Method in Two passes
*/
#include<iostream>
#include<cstring>
#include<climits>
using namespace std;

int leftMostNonRepeat(string str) {
    int count[256] = {0};

    // First pass: count frequency
    for (int i = 0; i < str.length(); i++) {
        count[str[i]]++;
    }

    // Second pass: find first character with frequency 1
    for (int i = 0; i < str.length(); i++) {
        if (count[str[i]] == 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string str1;
    cout << "Enter first string : ";
    getline(cin, str1);

    int index = leftMostNonRepeat(str1);
    if (index != -1)
        cout << "Leftmost non-repeating character is '" << str1[index] << "' at index " << index << endl;
    else
        cout << "All characters are repeating." << endl;

    return 0;
}
 