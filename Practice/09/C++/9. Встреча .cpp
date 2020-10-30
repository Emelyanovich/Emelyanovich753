#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int h1, m1, h2, m2, period;
    char c;

    cout << "������� ������ ����� (��:��): ";
    cin >> h1 >> c >> m1;
    cout << "������� ������ ����� (��:��): ";
    cin >> h2 >> c >> m2;

    if (h1 < 0 or h1 > 23 or h2 < 0 or h2 > 23 or m1 < 0 or m1 > 59 or m2 < 0 or m2 > 59) {
        cout << "������������ ����" << endl;
    }

    if (h1 == 23 && h2 == 0)
        h2 += 24;

    period = abs((h2 * 60 + m2) - (h1 * 60 + m1));

    if (period <= 15)
        cout << "������� ���������" << endl;
    else
        cout << "������� �� ���������" << endl;

}