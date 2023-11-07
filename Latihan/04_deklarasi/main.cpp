#include <iostream>

using namespace std;

int main()
{
    int a; // Deklarasi
    a = 1; // Inisialisasi

    cout << a << endl;

    int b;
    cout << "Masukkan nilai: ";
    cin >> b;
    cout << "nilai yang anda masukkan: " << endl;
    cout << b << endl;

    cin.get();
    return 0;
}