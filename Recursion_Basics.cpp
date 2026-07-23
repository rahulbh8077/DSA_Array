#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n == 0) {
        return; // Base case
    }

    printNumbers(n - 1); // Recursive call
    cout << n << " ";
}

int main() {
    int n;
    cout << "Enter N: ";
    cin >> n;

    printNumbers(n);

    return 0;
}
