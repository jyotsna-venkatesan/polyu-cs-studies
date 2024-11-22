#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int integer1,a,b;
    float z;
    cout << "MENU";
    cout << "\n\t1. Divide, a/b\n\t2. Multiply, a/b\n\t3. Power, a^b\n\t4. Square root, sqrt(a)" << endl;
    cout << "Enter your choice\n"; 
    cin >> integer1;    
    if (integer1==1){
        cout << "Enter two numbers: ";
        cin >> a;
        cin >> b;
        z=a/b;
        cout << a << "/" << b << " = " << z << endl;
    }
    else if (integer1==2){
        cout << "Enter two numbers: ";
        cin >> a;
        cin >> b;
        z=a*b;
        cout << a << "*" << b << " = " << z << endl;
    }
    else if (integer1==3){
        cout << "Enter two numbers: ";
        cin >> a;
        cin >> b;
        z= pow(a,b);
        cout << a << "^" << b << " = " << z << endl;
    }
    else if (integer1==4){
        cout << "Enter a number: ";
        cin >> a;
        z = sqrt(a);
        cout << "sqrt(" << a << ") = " << z << endl;
    }
    else{
        cout << "invalid input" << endl;
    }
    return 0;
}