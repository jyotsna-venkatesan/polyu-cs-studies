#include <iostream>
#include <cstring>

using namespace std;

int main() {

    struct studentStructures {
        char names[50];
        int id;
    };

    studentStructures studentArray[100]; 
    int studentCount = 0;

    cout << "Enter student names and ID, and input END to finish the input: " << endl;

    // Accept student names and IDs 
    for (int i = 0; i < 100; i++){

        cin.getline(studentArray[i].names, 50);


        if (strcmp(studentArray[i].names, "END") == 0) {
            break;
        }

        char* names = strtok(studentArray[i].names, " ");
        char* id_str = strtok(NULL, " ");
        int id = atoi(id_str);

        strcpy(studentArray[i].names, names);
        studentArray[studentCount].id = id;
        studentCount += 1;

    }

    // Sort the array in increasing order 
    bool swapped;
    for (int i = 0; i < studentCount - 1; i++) {
        swapped = false;
        for (int j = 0; j < studentCount - 1; j++) {
            if (studentArray[j].id > studentArray[j + 1].id) {
                studentStructures temp = studentArray[j];
                studentArray[j] = studentArray[j+1];
                studentArray[j+1] = temp;
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }

    // Print students

    for (int i = 0; i < studentCount; i++) {
        cout << studentArray[i].names << " " << studentArray[i].id << endl;
    }

    return 0;
}