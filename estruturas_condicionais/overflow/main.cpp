#include <iostream>

using namespace std;

int main()
{
    int maior_numero, p, q;
    char c;

    cin >> maior_numero >> p >> c >> q;

    if(c == '*')
    {
        if(p*q > maior_numero)
            cout << "OVERFLOW";
        else
            cout << "OK";
    }
    else
    {
        if(p+q > maior_numero)
            cout << "OVERFLOW";
        else
            cout << "OK";
    }
    return 0;
}