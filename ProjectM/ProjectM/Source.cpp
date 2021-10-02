#include <iostream>
#include <stdlib.h>
#include <math.h>

int main()
{
    // Задание 1
   setlocale(LC_ALL, "Russian");
    cout << "Введите n" << endl;
    int n;
    cin >> n;
    int k = 0;
    k = (n / 25) + ((n % 25) / 10) + (((n % 25) % 10) / 5) + (n % 5);
    cout << "Количество монет: " << k << endl;
