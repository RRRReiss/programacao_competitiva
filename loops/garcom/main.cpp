#include <iostream>

using namespace std;

int main() 
{
    int bandejas, latas, copos, quebrou = 0;
    cin >> bandejas;
    for(int i = 0; i < bandejas; i++)
    {
        cin >> latas >> copos;
        if(latas > copos)
        {
            quebrou += copos;
        }
    }
    cout << quebrou;
    return 0;
}