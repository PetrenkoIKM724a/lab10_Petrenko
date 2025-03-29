#include <iostream>
#include <string>

using namespace std;

const int a = 100;

struct Enterprise {
    char name[50];
    char month[20];
    double profit;
};

int main() {
    setlocale(LC_ALL, "ukr");
    int n;

    cout << "Введiть кiлькiсть пiдприємств: ";
    cin >> n;

    Enterprise enterprises[a];

    for (int i = 0; i < n; i++) {
        cout << "\nВведiть данi для пiдприємства " << i + 1 << ":" << endl;

        cout << "Назва пiдприємства: ";
        cin >> enterprises[i].name;

        cout << "Мiсяць: ";
        cin >> enterprises[i].month;

        cout << "Прибуток (грн): ";
        cin >> enterprises[i].profit;
    }

    cout << "\nДокумент про фiнансову дiяльнiсть пiдприємств:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Пiдприємство: " << enterprises[i].name << ", Мiсяць: " << enterprises[i].month << ", Прибуток: " << enterprises[i].profit << " грн" << endl;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (enterprises[j].profit > enterprises[j + 1].profit) {
                Enterprise temp = enterprises[j];
                enterprises[j] = enterprises[j + 1];
                enterprises[j + 1] = temp;
            }
        }
    }

    cout << "\nСписок пiдприємств у залежностi вiд збiльшення прибутку:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Пiдприємство: " << enterprises[i].name << ", Мiсяць: " << enterprises[i].month << ", Прибуток: " << enterprises[i].profit << " грн" << endl;
    }

    return 0;
}