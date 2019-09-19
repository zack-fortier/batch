/* Prints 100 # */
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    for (int i = 0; i < 100; i++) {
        cout << "#";
        Sleep(200);
    }
    return 0;
}