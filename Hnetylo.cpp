#include <iostream>
#include <Windows.h>
using namespace std;
   
int main () {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
        float number;

        cout << "Введіть свою температуру в градусах Цельсія: ";
        cin >> number;

        if (number < 0) {
            cout << "Холодно" << endl;
        }
        else if (number >= 0 && number <= 30) {
            cout << "Помірно" << endl;
        }
        else {
            cout << "Жарко" << endl;
        }

        return 0;
    }
     
