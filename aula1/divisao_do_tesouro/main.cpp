#include <iostream>

using namespace std;

int main()
{
    int moedas_arca, numero_marinheiros, moedas_marinheiros, moedas_capitao;

    cin >> moedas_arca >> numero_marinheiros;

    moedas_marinheiros = moedas_arca/(numero_marinheiros + 2);

    moedas_capitao = 2*moedas_marinheiros;

    cout << moedas_capitao;

    return 0;
}