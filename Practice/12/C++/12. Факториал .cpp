#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int n, f;
    cout << "������� �����: ";
    cin >> n;
    f = 1;

    for (int i = 2; i <= n; i++)
        f *= i;
    cout << "���������: " << f << endl;

    return 0;
}