#include <iostream>

using namespace std;

int main() {
    int sign = 1;
    int sum = 0;
    int numbers[1000];
    cout << "Enter a sequence of integers (-999 to finish): "; 
    for (int i = 0; i < 1000; i++)          
    { 
        cin >> numbers[i];
        if ( numbers[i] == -999){
            break;
        }
        sum += numbers[i] * sign;
        sign = sign * -1;
    }
    
    cout << "The alternating sum is: ";
    cout << sum << endl;
    
    return 0;

}