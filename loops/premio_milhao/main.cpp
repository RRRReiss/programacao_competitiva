#include <iostream>

using namespace std;

int main()
{
    int dias, acessos_dia, dias_premio, soma_acessos = 0;
    cin >> dias;
    for(int i = 0; i < dias; i++)
    {
        cin >> acessos_dia;
        soma_acessos += acessos_dia;
        if(soma_acessos >= 1000000)
        {
            dias_premio = i + 1;
            break;
        }    
    }
    cout << dias_premio;
    return 0;
}