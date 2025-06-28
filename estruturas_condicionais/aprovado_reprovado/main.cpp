#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2;
    cin >> nota1 >> nota2;
    if((nota1 + nota2)/2 >= 7)
        cout << "Aprovado";
    else if ((nota1 + nota2)/2 < 4)
        cout << "Reprovado";
    else
        cout << "Recuperacao";
    return 0;
}