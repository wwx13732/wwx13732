#include <iostream>

using namespace std;

int uczniowie, laseczki, x, y;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie:" << endl;
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama:";
    cin >> cukierki;

    x = cukierki/(uczniowie-1);
    cout <<"Tyle cukierkow otrzyma kazdy uczen:" << x;

    y = cukierki-x*(uczniowie-1);
    cout << endl << "Tyle cukierkow zostanie Jasiowi:" << y;

    return 0;
}
