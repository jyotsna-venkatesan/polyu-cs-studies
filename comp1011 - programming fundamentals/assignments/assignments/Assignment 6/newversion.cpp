#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool hasSpacesOrNonLetters(char *word) {
    for (int i = 0; i < strlen(word); i++) {
        if (!isalpha(word[i]) || isspace(word[i])) {
            return true;
        }
    }
    return false;
}

int main() {
    char arr[MAX_ROWS][MAX_COLS];
    int numRows, numCols;

    // Get the number of rows and columns
    cout << "Enter the number of rows (1-" << MAX_ROWS << "): ";
    cin >> numRows;
    cout << "Enter the number of columns (1-" << MAX_COLS << "): ";
    cin >> numCols;

    // Check for invalid input
    if (numRows <= 0 || numCols <= 0 || numRows > MAX_ROWS || numCols > MAX_COLS) {
        cerr << "Invalid number of rows or columns\n";
        return 1;
    }

    // Get the words in the array
    cout << "Enter the words in the array:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << "Enter word at row " << i << ", column " << j << ": ";
            cin >> arr[i][j];
            while (hasSpacesOrNonLetters(arr[i][j])) {
                cout << "Invalid word. Enter again: ";
                cin >> arr[i][j];
            }
        }
    }

    // Display the words in the array
    cout << "The words in the array are:\n";
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}