#include <iostream>
using namespace std;

int main() {
    char gender;
    int age;
    float salary;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your salary: ";
    cin >> salary;

    if (gender == 'F')
	 {
        if (age >= 18) {
            if (salary > 0) {
                cout << "She is eligible for marriage." << endl;
            } else {
                cout << "She is not eligible for marriage due to insufficient salary." << endl;
            }
        } else {
            cout << "She is not eligible for marriage due to age restriction." << endl;
        }
     }else if (gender == 'M') {
        if (age >= 21) {
            if (salary > 25000) {
                cout << "He is eligible for marriage." << endl;
            } else {
                cout << "He is not eligible for marriage due to insufficient salary." << endl;
            }
        } else {
            cout << "He is not eligible for marriage due to age restriction." << endl;
        }
     } 
	else {
        cout << "Invalid gender input. Please enter 'M' or 'F'." << endl;
    }

    return 0;
}
