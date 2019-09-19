/* Factorial of 10 */
#include <iostream>
#include <Windows.h>
using namespace std;

long factorial (long a) {
    if (a > 1) {
        Sleep(200);
        return (a * factorial (a-1));
    }
    else
        return 1;
}

int main () {
    for (long number = 1; number < 11; number++) {
        cout << number << "! = " << factorial (number);
        cout << "\n";
        Sleep(200);
    }
    return 0;
}