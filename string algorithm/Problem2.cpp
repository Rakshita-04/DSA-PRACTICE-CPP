/* First leftmost Repeating Character index
Q. Given the string find the leftmost character that is repeating.
Efficient Approach for finding leftmost character is repeating
*/
#include<iostream>
#include<climits>  // For INT_MAX
#include<cstring>
using namespace std;

int leftMostRepeat(string str) {
    int count[256];

    // Initialize all elements to -1
    for (int i = 0; i < 256; i++) {
        count[i] = -1;
    }

    int temp = INT_MAX;

    for (int i = 0; i < str.length(); i++) {
        if (count[str[i]] == -1) {
            count[str[i]] = i;
        } else {
            temp = min(temp, count[str[i]]);
        }
    }

    return (temp == INT_MAX) ? -1 : temp;
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
