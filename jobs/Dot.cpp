/* Prints 50 dots */
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    for (int i = 0; i < 50; i++) {
        cout << ".";
        Sleep(200);
    }
    return 0;
}