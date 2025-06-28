#include <iostream>

using namespace std;

int main()
{
    int num_alunos, num_monitores;
    cin >> num_alunos >> num_monitores;
    if((num_alunos + num_monitores) > 50)
        cout << "N";
    else
        cout << "S";
    return 0;
}