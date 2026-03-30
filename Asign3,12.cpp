#include<iostream>
using namespace std;

int main() {
    int start = 1, end = 100, i, j, flag;

    for(i = start; i <= end; i++) {
        flag = 1;
        if(i <= 1) continue;

        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 2;
                break;
            }
        }

        if(flag == 1)
            cout << i << " ";
    }
}
