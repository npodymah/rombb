#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "ru");

    int n = 0;
    char symbol = 0;
    cout << "������� ������" << endl;
    cin >> symbol;
    cout << "������� ������ ����� �������� �����"<< endl;
    cin >> n;

    for (int i = 1; i <= n; i += 2) {
        for (int j = 1; j <= n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << symbol;
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 1; j <= n - i; j += 2) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << symbol;
        }
        cout << endl;
    }
}






