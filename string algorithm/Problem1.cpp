/* First leftmost Repeating Character index
Q. Given the string find the leftmost character that is repeating.
By Counting Method in Two passes
*/
#include<iostream>
#include<cstring>
using namespace std;

int leftMostRepeat(string str1) {
    int count[256] = {0};  // ASCII size

    for (int i = 0; i < str1.length(); i++) {
        count[str1[i]]++;
    }

    for (int i = 0; i < str1.length(); i++) {
        if (count[str1[i]] > 1) {
            return i;
        }
    }

    return -1;
}

int main() {
    string str1;
    cout << "Enter first string : ";
    getline(cin, str1);  

    int index = leftMostRepeat(str1);
    if (index != -1)
        cout << "Leftmost repeating character is '" << str1[index] << "' at index " << index << endl;
    else
        cout << "No repeating characters found." << endl;

    return 0;
}
