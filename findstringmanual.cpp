#include <iostream>
using namespace std;

int customFind(const string& text, const string& pattern) {
    int textLength = text.length();
    int patternLength = pattern.length();

    for (int i = 0; i <= textLength - patternLength; ++i) {
        int j;
        for (j = 0; j < patternLength; ++j) {
            if (text[i + j] != pattern[j]) {
                break; // Break the inner loop if characters don't match
            }
        }
        if (j == patternLength) {
            return i; // Return the index where the pattern is found
        }
    }

    return -1; // Return -1 if the pattern is not found
}

int main() {
    string text = "This is a sample text.";
    string pattern = "sample";
    

    int foundIndex = customFind(text, pattern);

    if (foundIndex != -1) {
        cout << "Pattern found at index: " << foundIndex << endl;
    } else {
        cout << "Pattern not found." << endl;
    }

    return 0;
}
