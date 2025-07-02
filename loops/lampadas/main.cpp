#include <iostream>

using namespace std;

int main()
{
    int lampadaA = 0, lampadaB = 0, interruptor, n;

    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> interruptor;
        if(interruptor == 1)
        {
            if(lampadaA == 1)
                lampadaA = 0;
            else
                lampadaA = 1;
        }
        else
        {
            if(lampadaA == 1)
                lampadaA = 0;
            else
                lampadaA = 1;

            if(lampadaB == 1)
                lampadaB = 0;
            else
                lampadaB = 1;
        }
    }
    cout << lampadaA << endl << lampadaB; 
    return 0;
}