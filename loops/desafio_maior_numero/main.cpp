#include <iostream>

using namespace std;

int main()
{
    int numeros, maior = 0;
    cin >> numeros;
    while(numeros != 0)
    {
        if(numeros > maior)
            maior = numeros;
        cin >> numeros;
    }
    cout << maior;
    return 0;
}