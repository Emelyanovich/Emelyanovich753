#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "RUS");

    int g, n, s, x;

    g = 1;
    while (g == 1) {
        n = rand() % 100;
        cout << "������! ������ ����� �� 100, ������� ������� ���������. ";

        s = 0;
        while (true) {
            s++;
            cin >> x;
            if (x == n) {
                cout << "����������! �� �������" << endl;
                break;
            }
            else if (x > n)
                cout << "���������� ����� ������" << endl;
            else
                cout << "���������� ����� ������" << endl;

            if (s == 5) {
                cout << "�� ���������. ���� ��������:" << n << endl;
                break;
            }
        }

        cout << "������ ������ �������? (1 - �� ): ";
        cin >> g;
        cout << endl;
        continue;
    }
    return 0;
}