#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter Number: ";
    cin >> n;

    int rows = n;
    if (n != 5)
        rows = (n % 5) + 5;

    for (int i = 1; i <= rows; ++i) {
        for (int j = n; j >= 1; --j) {
            if (j >= i)
                cout << j;
            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
