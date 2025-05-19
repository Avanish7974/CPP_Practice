#include <iostream>
using namespace std;

int main() {
    char g;
    int age;

    cout << "Enter your gender (M/F): ";
    cin >> g;


    if (g == 'F') {
        cout << "Enter your age: ";
        cin >> age;

        if (age >= 60) {
            cout << "Your pension amount is: 1000" << endl;
        } else if (age >= 55) {
            cout << "Your pension amount is: 500" << endl;
        } else {
            cout << "Female is not eligible for pension" << endl;
        }
    } else if (g == 'M') {
        cout << "Enter your age: ";
        cin >> age;

        if (age >= 60) {
            cout << "Your pension amount is: 2000" << endl;
        } else if (age >= 55) {
            cout << "Your pension amount is: 1000" << endl;
        } else {
            cout << "Male is not eligible for pension" << endl;
        }
    } else {
        cout <<  "Please enter " << endl;
    }

    return 0;
}
