#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    if(n1 > n2)
    {
        for(int i = n2; i <= n1; i++)
        {
            cout << i << " ";
        }
    }
    else
        for(int i = n1; i <= n2; i++)
            cout << i << " ";
    return 0;
}