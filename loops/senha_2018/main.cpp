#include <iostream>

using namespace std;

int main()
{
    int chute = 0, erros = 0;
    cin >> chute;
    while(chute != 2018)
    {
        erros++;
        cin >> chute;
    }
    cout << erros;
    return 0;
}