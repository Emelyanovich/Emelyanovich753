#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int n, s;
    cout << "������� �����: ";
    cin >> n;

    if (n < 2 || n > 10e9) {
        cout << "������������ ����";
        return 0;
    }

    s = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0) /* ������� ������� �� ������� �� i*/
            s = s + 1;

    if (s == 2)
        cout << "������� �����" << endl;
    else
        cout << "��������� �����" << endl;
}