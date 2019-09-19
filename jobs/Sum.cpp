/* Sums numbers from 1 to 10 */
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i < 11; i++) {
        sum += i;
        cout << sum;
        cout << "\n";
        Sleep(500);
    }
    return 0;
}