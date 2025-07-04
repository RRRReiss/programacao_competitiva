#include <iostream>

using namespace std;

int main()
{
    int linha, coluna, cor = 1;
    cin >> linha >> coluna;
    for(int i = 0; i < linha + coluna; i++)
    {
        if(cor == 0)
            cor = 1;
        else
            cor = 0;
    }
    cout << cor;
    return 0;
}