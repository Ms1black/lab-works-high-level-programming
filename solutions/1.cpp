#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    int x;
    
    cin >> x;

    if(x <= 0) 
    {
        cout << -x << endl;
    } 
    else if ((x < 3) && (x > 0))
    {
        cout << 1 << endl;
    } 
    else 
    {
        cout << -1 << endl;
    }

    return 0;
}
