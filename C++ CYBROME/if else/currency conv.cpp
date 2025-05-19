#include <iostream>
using namespace std;

int main() {
    double D = 0.011;
    double K = 0.0035;
    double N = 1.60;
    double E = 0.011;
    double Y = 1.78;
    double i;
    char r;

    cout << "Enter The Amount You Want to Convert: ";
    cin >> i;
    
    cout << "Choose The Currency - ";
    cout << "\n D = 0.011\n K = 0.0035\n N = 1.60\n E = 0.011\n Y = 1.78" << endl;
    cin >> r;

    if (r == 'D') {
        cout << "Converted Amount: " << i * D << endl;
    } else if (r == 'K') {
        cout << "Converted Amount: " << i * K << endl;
    } else if (r == 'N') {
        cout << "Converted Amount: " << i * N << endl;
    } else if (r == 'E') {
        cout << "Converted Amount: " << i * E << endl;
    } else if (r == 'Y') {
        cout << "Converted Amount: " << i * Y << endl;
    } else {
        cout << "Invalid Currency Choice!" << endl;
    }

    return 0;
}