#include <iostream>
#include <iomanip>

using namespace std;

int largest(int numbers[], int count) {

    // Compare values and find largest number

    int large = numbers[0];

        for (int i = 0; i < count; i++) {
            if (large < numbers[i]) {
                large = numbers[i];
            }
        }

    return large;
}

int smallest(int numbers[], int count) {

    // Compare values and find smallest number

    int small = numbers[0];

        for (int i = 0; i < count; i++) {
            if (small > numbers[i]) {
                small = numbers[i];
            }
        }

    return small;
}


int total(int numbers[], int count) {

    // Find total

    int sum = 0;

    for (int i = 0; i < count ; i++){
        sum = sum + numbers[i];
    }

    return sum;
}

float average(int numbers[], int count) {

    // Find total

    int sum = 0;

    for (int i = 0; i < count ; i++){
        sum = sum + numbers[i];
    }

    float avg = (float)sum/count;

    return avg;
}

int main() {

    int numbers[1000];
    int count = 0;
    // Accept numbers into an Array 

    cout << "Enter a sequence of integers (-999 to finish): "; 
    for (int i = 0; i < 1000; i++)          
    { 
        cin >> numbers[i];
        count = count + 1;
        if ( numbers[i] == -999){
            count = count - 1;
            break;
        }

    }

    int large = largest(numbers, count);
    int small = smallest(numbers, count);
    int sum = total(numbers, count);
    float avg = average(numbers, count);

    cout << "Largest number is " << large << endl;
    cout << "Smallest number is " << small << endl;
    cout << "Total is " << sum << endl;
    cout << "Average is ";
    std::cout << std::fixed << std::setprecision(3) << avg << endl;
    

    cout << endl;
    
    return 0;

}