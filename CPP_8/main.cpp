#include <iostream>
#include <Windows.h>

using namespace std;

int findMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number1, number2;

    cout << "Введіть перше число: ";
    cin >> number1;

    cout << "Введіть друге число: ";
    cin >> number2;

    int maxNumber = findMax(number1, number2);

    cout << "Найбільше число: " << maxNumber << endl;

    return 0;
}
