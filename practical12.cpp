#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;

// Function to remove white spaces from a string
string removeSpaces(const string& str) {
    string result;
    for (char c : str) {
        if (!isspace(c)) {
            result += c;
        }
    }
    return result;
}

int main() {
    ifstream fin("input.txt");
    if (!fin) {
        cerr << "Error opening input file!" << endl;
        return 1;
    }

    ofstream fout("output.txt");
    if (!fout) {
        cerr << "Error opening output file!" << endl;
        return 1;
    }

    string line;
    while (getline(fin, line)) {
        line = removeSpaces(line);
        fout << line << endl;
    }

    cout << "Contents of input.txt copied to output.txt after removing white spaces." << endl;

    fin.close();
    fout.close();

    return 0;
}
