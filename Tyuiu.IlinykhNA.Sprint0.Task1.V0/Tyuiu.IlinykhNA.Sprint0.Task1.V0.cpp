// Tyuiu.IlinykhNA.Sprint0.Task1.V0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{   
    setlocale(LC_ALL, "Russian");
    cout << "Hello World!\n"; //cout отвечает за вывод данных на экран консоли.
    cout << "Введите ФИО : ";
    string a; 
    cin >> a; //cin отвечает за ввод данных.
    int v;
    cin >> v;
    cout << "Ваш возраст = " << v;
    return 0; //вывод результата после загрузки консоли 
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
//заметки : для работы //setLocale(LC_ALL. "Russian"); - необходимо пересохранить проект в кодировке 1251.
    //SetConsoleOutputCP(1251);
    //SetConsoleCP(1251);
    //#include <windows.h>