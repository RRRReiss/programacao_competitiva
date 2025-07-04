#include <iostream>

using namespace std;

int main()
{
    int divisoes, pedacos, armazenados = 0;
    cin >> divisoes;
    for(int i = 0; i < divisoes; i++)
    {
        cin >> pedacos;
        armazenados += pedacos - 1;
    }
    cout << armazenados;
    return 0;
}