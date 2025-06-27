#include <iostream>

using namespace std;

int main()
{
    int P, R;
    char caminho;

    cin >> P >> R;

    if(P == 0)
    {
        caminho = 'C';
    } 
    else if(R == 0)
    {
        caminho = 'B';
    }
    else
    {
        caminho = 'A';
    }

    cout << caminho;

    return 0;
}