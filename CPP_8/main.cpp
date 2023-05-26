#include <iostream>
#include <windows.h>
using namespace std;

unsigned long long factorial(unsigned int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    unsigned int number;
    cout << "Введіть число: ";
    cin >> number;

    unsigned long long result = factorial(number);
    cout << "Factorial " << number << " = " << result << endl;

    return 0;
}
