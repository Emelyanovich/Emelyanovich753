#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int x, n, s;

    cout << "������� �����: ";
    cin >> x;
    cout << "������� �������: ";
    cin >> n;

    s = 0;
    if (n != 0) {
        s = x;
        for (int i = 1; i < n; i++)
            s *= x;
    }
    cout << s;

    return 0;
}