#include<iostream>
using namespace std;

int main() {
    int a = 10, b = 18, gcd;

    for(int i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            gcd = i;
    }

    cout << "GCD = " << gcd;
}
