#include <iostream>

using namespace std;

int main()
{
    int alice, beto, clara;
    cin >> alice >> beto >> clara;
    if(alice == beto && beto == clara)
        cout << '*';
    else if(alice == beto && beto != clara)
        cout << 'C';
    else if(alice == clara && clara != beto)
        cout << 'B';
    else
        cout << 'A';
    return 0;
}