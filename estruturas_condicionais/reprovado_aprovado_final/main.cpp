#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2;
    cin >> nota1 >> nota2;
    if((nota1*2 + nota2*3)/5 >= 7)
        cout << "Aprovado";
    else if ((nota1*2 + nota2*3)/5 < 3)
        cout << "Reprovado";
    else
        cout << "Final";
    return 0;
}