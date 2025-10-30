#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string driverLicense;
    string recommendation;

    // User inputs
    cout << "Enter your age: ";
    cin >> age;

    cout << "Do you have a driver’s license? (yes/no): ";
    cin >> driverLicense;

    cout << "Do you have a recommendation? (type 'OK' if yes): ";
    cin >> recommendation;

    // Decision logic
    if (recommendation == "OK") {
        cout << "Welcome aboard!" << endl;
    } 
    else if (age >= 20 && driverLicense == "yes") {
        cout << "Welcome aboard!" << endl;
    } 
    else {
        cout << "We are sorry." << endl;
    }

    return 0;
}
