#include <iostream>

using namespace std;

int main()
{
    int numero_valores, valor, ultimo_valor, pontos = 1, max_pontos = 1;
    cin >> numero_valores;
    for(int i = 0; i < numero_valores; i++)
    {
        cin >> valor;
        if(i == 0)
        {
            ultimo_valor = valor;
            continue;
        }
        if(valor == ultimo_valor)
        {
            pontos++;
        }
        else
        {
            if(pontos > max_pontos)
            {
                max_pontos = pontos;
            }
            pontos = 1;
        }
        ultimo_valor = valor;
    }
    if(pontos > max_pontos)
        max_pontos = pontos;
    cout << max_pontos;
    return 0;
}