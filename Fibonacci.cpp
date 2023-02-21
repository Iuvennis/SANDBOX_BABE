#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int a1 = 0;
    int a2 = 1;
    int n;

    cout << "Enter the n, motherfucker: ";
    cin >> n;
    cout << endl << "Get it back, bitch: " << endl;

    switch (n) {
    case(0):
        cout << "Fuck you. Am I a joke for you?";
    default:
        for (int i = 0; i < n; i++) {
            cout << a1 << endl;
            a1 = a1 + a2;
            a2 = a1 - a2;    
        }

    }
}
