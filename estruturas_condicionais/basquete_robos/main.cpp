#include <iostream>

using namespace std;

int main()
{
    int posicao;
    cin >> posicao;

    if(posicao <= 800)
        cout << 1;
    else if(posicao <= 1400)
        cout << 2;
    else
        cout << 3;
    
    return 0;
}