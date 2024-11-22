#include <iostream>

using namespace std;

void rotate(char * charArray, int * sizeOfArray){
    char last = charArray[0];
    for (int i = 0; i < * sizeOfArray - 1; i++) {
        charArray[i] = charArray[i+1];
    }
    charArray[* sizeOfArray - 1] = last;
}

int main() {

    char charArray[100];
    int sizeOfArray = 0;

    // Accept characters into an Array 

    cout << "Enter a sequence of characters: " << endl; 
    cin >> charArray;
    sizeOfArray = strlen(charArray);

    // Initialising pointers for array and size

    char * charArrayPointer = charArray;
    int * sizeOfArrayPointer = &sizeOfArray;

    // Perform rotate function

    for (int i = 0; i < sizeOfArray; i++) {
        rotate(charArrayPointer, sizeOfArrayPointer);
        cout << charArray << endl;
    }

    cout << endl;
    
    return 0;

}