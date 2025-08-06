/* Find count the frequency and cummulative frequency*/
#include<iostream>
#include<cstring>
using namespace std;

// Function to compute factorial
int fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

// Function to compute lexicographic ranksaurabh

int rankOfString(string str) {
    int rank = 1;
    int n = str.length();
    int mul = fact(n);

    int count[256] = {0};

    // Step 1: Count frequency of each character
    for (int i = 0; i < n; i++) {
        count[str[i]]++;
    }

    // Step 2: Convert count[] to cumulative frequency
    for (int i = 1; i < 256; i++) {
        count[i] += count[i - 1];
    }

    // Step 3: Calculate rank
    for (int i = 0; i < n; i++) {
        mul = mul / (n - i);

        rank += count[str[i] - 1] * mul;

        // Step 4: Remove used character from count[]
        for (int j = str[i]; j < 256; j++) {
            count[j]--;
        }
    }

    return rank;
}

int main() {
    string str;
    cout << "Enter first string : ";
    getline(cin, str);

    int rank = rankOfString(str);
    cout << "Lexicographic rank of the string is: " << rank << endl;

    return 0;
}
