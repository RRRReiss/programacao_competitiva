#include <iostream>

using namespace std;

int main()
{
    int tamanho, sequencia_atual = -1, sequencia_ultimo = -1, sequencia_penultimo = -1, padrao = 0;
    cin >> tamanho;
    for(int i = 0; i < tamanho; i++)
    {
        cin >> sequencia_atual;
        if(sequencia_atual == 0 && sequencia_ultimo == 0 && sequencia_penultimo == 1)
        {
            padrao++;
        }
        sequencia_penultimo = sequencia_ultimo;
        sequencia_ultimo = sequencia_atual;

    }
    cout << padrao;
    return 0;
}