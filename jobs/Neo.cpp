/* Fun Matrix easter egg */
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    string hello("Wake up, Neo...");
    for (int i = 0; i < hello.size(); i++) {
        cout << hello[i];
        Sleep(300);
    }
    cout << "\n";
    Sleep(500);
    string matrix("The Matrix has you...");
    for (int i = 0; i < matrix.size(); i++) {
        cout << matrix[i];
        Sleep(300);
    }
    return 0;
}