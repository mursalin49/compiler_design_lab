
#include <iostream>
using namespace std;

bool matchesPattern(const string& input) {
    int i = 0;
    int len = input.length();

    // Check for once or not at all 'a'
    if (i < len && input[i] == 'a') {
        i++;
    }

    // Check for optional 'bc'
    if (i + 1 < len && input[i] == 'b' && input[i + 1] == 'c') {
        i += 2;
    }

    // Check for 'de' at the end
    return (i == len - 2 && input[i] == 'd' && input[i + 1] == 'e');
}

int main() {
    // Strings to test against the pattern
    string testStrings[] = {
        "ade",
        "abcbcde",
        "abde",
        "abcbde",
        "abcde",
        "abcbcbcde"
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
