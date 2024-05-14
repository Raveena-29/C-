#include <iostream>
#include <cstring>

using namespace std;

// Function to display the address of each character in the string
void showAddress(const char *str) {
    cout << "Address of each character in the string:" << endl;
    for (int i = 0; str[i] != '\0'; i++) {
        cout << "Character: " << str[i] << " Address: " << (void *)&str[i] << endl;
    }
}

// Function to concatenate two strings
void concatenateStrings(char *str1, char *str2) {
    strcat(str1, str2);
    cout << "Concatenated string: " << str1 << endl;
}

// Function to compare two strings
int compareStrings(const char *str1, const char *str2) {
    return strcmp(str1, str2);
}

// Function to calculate length of the string using pointers
int stringLength(const char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

// Function to convert all lowercase characters to uppercase
void toUpperCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // converting lowercase to uppercase
        }
    }
    cout << "String in uppercase: " << str << endl;
}

// Function to reverse the string
void reverseString(char *str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    cout << "Reversed string: " << str << endl;
}

// Function to insert a string in another string at a user specified position
void insertString(char *mainStr, char *subStr, int position) {
    int mainStrLength = strlen(mainStr);
    int subStrLength = strlen(subStr);

    // Check if the position is valid
    if (position < 0 || position > mainStrLength) {
        cout << "Invalid position!" << endl;
        return;
    }

    // Shift characters to right to make space for subStr
    for (int i = mainStrLength; i >= position; i--) {
        mainStr[i + subStrLength] = mainStr[i];
    }

    // Insert subStr into mainStr
    for (int i = 0; i < subStrLength; i++) {
        mainStr[position + i] = subStr[i];
    }

    cout << "String after insertion: " << mainStr << endl;
}

int main() {
    char str1[100], str2[100], choice;
    int position;

    cout << "Enter string 1: ";
    cin.getline(str1, 100);

    cout << "Enter string 2: ";
    cin.getline(str2, 100);

    do {
        cout << "\nMenu:";
        cout << "\na. Show address of each character in string";
        cout << "\nb. Concatenate two strings";
        cout << "\nc. Compare two strings";
        cout << "\nd. Calculate length of the string";
        cout << "\ne. Convert all lowercase characters to uppercase";
        cout << "\nf. Reverse the string";
        cout << "\ng. Insert a string in another string at a user specified position";
        cout << "\nh. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                showAddress(str1);
                break;
            case 'b':
                concatenateStrings(str1, str2);
                break;
            case 'c':
                if (compareStrings(str1, str2) == 0)
                    cout << "Strings are equal" << endl;
                else
                    cout << "Strings are not equal" << endl;
                break;
            case 'd':
                cout << "Length of string 1: " << stringLength(str1) << endl;
                cout << "Length of string 2: " << stringLength(str2) << endl;
                break;
            case 'e':
                toUpperCase(str1);
                toUpperCase(str2);
                break;
            case 'f':
                reverseString(str1);
                reverseString(str2);
                break;
            case 'g':
                cout << "Enter the position to insert string 2 into string 1: ";
                cin >> position;
                insertString(str1, str2, position);
                break;
            case 'h':
                cout << "Exiting...";
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 'h');

    return 0;
}
