#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    long x, s, n;
    cout << "������� �����: ";
    cin >> x;

    if (x < 0 || x > 10e15) {
        cout << "������������ ����" << endl;
        return 0;
    }

    s = 0;
    if (x != 0) {
        n = 1;
        while (n <= x) {
            n *= 2;
            s += 1;
        }
    }

    cout << s << endl;
}