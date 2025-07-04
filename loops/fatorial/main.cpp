#include <iostream>

using namespace std;

int main()
{
    int n, fatorial = 1;
    cin >> n;
    for(int i = n; i > 1; i--)
    {
        fatorial *= i;
    }
    cout << fatorial;
    return 0;
}