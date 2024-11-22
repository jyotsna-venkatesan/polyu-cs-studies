// Student ID: 22108825D
// Name : VENKATESAN Jyotsna

#include <iostream>

using namespace std;

// Function

int arrange(int numbers[], int len) {
    
    int sign = 1;
    int sum = 0;
    int oddNumbers[1000];
    int evenNumbers[1000];
    int countodd = 0;
    int counteven = 0;
    int temp;

    // Segregate numbers into two arrays -- odd and even

    for (int i = 0; i < len; i++)          
    { 
        if (numbers[i] % 2 == 0){
            evenNumbers[counteven] = numbers[i];
            counteven+=1;
        }
        if (numbers[i] % 2  != 0 && numbers[i] != -999){
            oddNumbers[countodd] = numbers[i];
            countodd+=1;
        }
    }
    

    // Arrange the odd numbers in ascending order

    for (int i = 0; i < countodd+1; i++) {
        for (int j = i + 1; j < countodd+1; j++) {
            if (oddNumbers[i] > oddNumbers[j]) {
                temp = oddNumbers[i];
                oddNumbers[i] = oddNumbers[j];
                oddNumbers[j] = temp;
            }
        }
    }

    // Arrange the even numbers in descending order

    for (int i = 0; i < counteven+1; i++) {
        for (int j = i + 1; j < counteven+1; j++) {
            if (evenNumbers[i] < evenNumbers[j]) {
                temp = evenNumbers[i];
                evenNumbers[i] = evenNumbers[j];
                evenNumbers[j] = temp;
            }
        }
    }

     // Print out odd numbers in ascending order 

    for (int j = 0; j < countodd; j++)   {
        cout << oddNumbers[j] << " ";
    }
    

     // Print out even numbers in descending order 

    for (int j = 0; j < counteven ; j++)   {
        cout << evenNumbers[j] << " ";
    }
    
    cout << endl;
    
    return 0;
}

int main() {

    int numbers[1000];
    int len = 1;
    cout << "Enter a sequence of integers (-999 to finish): "; 
    
    // Input unsorted numbers (both even and odd) 

    for (int i = 0; i < 1000; i++)          
    { 
        cin >> numbers[i];
        len = len + 1;
        if ( numbers[i] == -999){
            len = len - 1;
            break;
        }
    }
    
    arrange(numbers, len);

    return 0;

}