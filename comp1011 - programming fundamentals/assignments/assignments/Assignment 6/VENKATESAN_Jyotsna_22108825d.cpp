#include <iostream>
#include <cstring>

 
using namespace std;


int main() {

    char nameList[200][50];
    int countList = 0;
    bool checkBool = true;
    bool checkBoolNew = true;
    int countElement = 0;

    // Accept numbers into an Array 

    cout << "Enter student names and input END to finish the input: " << endl; 

    for (int i = 0; i < 200; i++)          
    { 

        checkBool = true;
        checkBoolNew = true;

        cin.getline(nameList[i], 51, '\n');

        // Discards extra characters entered

        if (cin.fail()) {
            cin.clear();
            while (!(cin.peek() == '\n')) {
                cin.ignore();
            }
            if (cin.peek() == '\n') {
                cin.ignore(1, '\n');
            }
        }

        // Check for usage of space between letters or non-alphabets

        for (int j = 0; j < strlen(nameList[i]); j++){

            if (nameList[i][j] == ' ' || !(isalpha(nameList[i][j]))){

                checkBool = false;
            }

            // If space or non-letter found, checks for space or non-letter in the new element

            while (checkBool == false) {
                cout << "Wrong input: please input only upper-case and low-case letters with no space in between " << endl;
                cin.getline(nameList[i], 51, '\n');

                for (int j = 0; j < strlen(nameList[i]); j++){

                    if (nameList[i][j] == ' ' || !(isalpha(nameList[i][j]))){
                        checkBoolNew = false;
                        break;
                    }

                    if (nameList[i][j] != ' ' && (isalpha(nameList[i][j]))) {
                        checkBoolNew = true;
                    }

                    }
                    if (checkBoolNew == true){
                        checkBool = true;
                        break;

                    }
            }
        }

        countList=countList + 1;

        // Stops accepting values is "END" is inputted

        if (strcmp(nameList[i], "END") == 0){
            countList = countList - 1;
            break;
        }
}

    cout << endl;

    // Convert all names to uppercase

    for (int i = 0; i < countList; i++) {
        for (int j = 0; j < strlen(nameList[i]) ; j++) {
            if(islower(nameList[i][j])){
                nameList[i][j] = toupper(nameList[i][j]);
            }
        }
    }

    char temp[50];

    // Arrange in ascending order

    for (int i = 0; i < countList - 1; i++) {
        for (int j = i + 1; j < countList; j++) {
            if (strcmp(nameList[i], nameList[j]) > 0) {
                strcpy(temp, nameList[i]);
                strcpy(nameList[i], nameList[j]);
                strcpy(nameList[j], temp);
            }
        }
    }

    // Print all names

        for (int i = 0; i < countList; i++) {
            cout << nameList[i] << endl;
        }
    cout << endl << endl;

    
    return 0;

}
