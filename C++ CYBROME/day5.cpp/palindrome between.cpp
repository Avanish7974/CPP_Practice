#include <iostream>
using namespace std;

int main() {
    int n, j;
   
   
    cout << "Enter the starting value: ";
    cin >> n;
    cout << "Enter the ending value: ";
    cin >> j;

    for (int num = n; num <= j; num++) {
        int temp = num, rem, sum = 0;

        
        while (temp > 0) {
            rem = temp % 10;
            sum = sum * 10 + rem;
            temp = temp / 10;
        }

        // Check if palindrome
        if (num == sum) {
            cout << num << " is a palindrome" << endl;
        }
    }

    return 0;
}
