#include <iostream>
#include <Windows.h>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true; 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "Введіть число: ";
    cin >> number;

    if (isPrime(number)) {
        cout << "Це число є простим." << endl;
    }
    else {
        cout << "Це число не є простим." << endl;
    }

    return 0;
}
