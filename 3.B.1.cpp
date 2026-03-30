#include <iostream>
using namespace std;

int main() {
    int n, rev = 0, original, rem;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while(n != 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if(original == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
