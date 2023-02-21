#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int a1 = 0;
    int a2 = 1;
    int n;

    cout << "Enter the n, dude: ";
    cin >> n;
    cout << endl << "Get it back, bro: " << endl;

    switch (n) {
    case(0):
        cout << "Am I a joke for you?";
    default:
        for (int i = 0; i < n; i++) {
            cout << a1 << endl;
            a1 = a1 + a2;
            a2 = a1 - a2;    
        }

    }
}
