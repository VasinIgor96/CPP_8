#include <iostream>

using namespace std;

void drawRectangle(int N, int K) 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < K; j++) 
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() 
{
    int height, width;
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;

    drawRectangle(height, width);

    return 0;
}
