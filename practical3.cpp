#include <iostream>
#include <cctype>
using namespace std;

void countAlphabets(const char *text, int count[]) {
    for (int i = 0; text[i] != '\0'; i++) {
        if (isalpha(text[i])) {
            char c = tolower(text[i]);
            count[c - 'a']++;
        }
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Usage: " << argv[0] << " <text>" << endl;
        return 1;
    }

    int count[26] = {0};

    for (int i = 1; i < argc; i++) {
        countAlphabets(argv[i], count);
    }

    cout << "Alphabet Counts:" << endl;
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << ": " << count[c - 'a'] << endl;
    }

    return 0;
}
