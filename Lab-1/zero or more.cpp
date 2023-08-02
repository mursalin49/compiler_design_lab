#include <iostream>
using namespace std;

bool matchesPattern(const string& input, int& index) {
    int len = input.length();

    // Check for zero or more 'a'
    while (index < len && input[index] == 'a') {
        index++;
    }

    // Check for zero or more occurrences of 'bc'
    if (index + 1 < len && input[index] == 'b' && input[index + 1] == 'c') {
        index += 2;
        // Recursively check for more occurrences of 'bc'
        return matchesPattern(input, index);
    }

    // Check for 'de' at the end
    return (index == len - 2 && input[index] == 'd' && input[index + 1] == 'e');
}

bool matchesPattern(const string& input) {
    int index = 0;
    while (index < input.length()) {
        if (!matchesPattern(input, index)) {
            return false;
        }
    }
    return true;
}

int main() {
    // Strings to test against the pattern
    string testStrings[] = {
        "ade",
        "abcbcde",
        "abde",
        "abcbde"
    };

    // Check if each test string matches the pattern
    for (const auto& str : testStrings) {
        if (matchesPattern(str)) {
            cout << str << " matches the pattern." << endl;
        } else {
            cout << str << " does not match the pattern." << endl;
        }
    }

    return 0;
}
