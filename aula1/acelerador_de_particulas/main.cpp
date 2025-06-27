#include <iostream>

using namespace std;

int main() 
{
    int distancia_total, distancia_acelerador, distancia_sensor, emissor_acelerador = 3, circunferencia_acelerador = 8, acelerador_sensor = 2;

    cin >> distancia_total;

    distancia_acelerador = distancia_total - emissor_acelerador;

    distancia_sensor = distancia_acelerador%circunferencia_acelerador - acelerador_sensor;

    cout << distancia_sensor;

    return 0;
}