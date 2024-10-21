#include <iostream>
#include <cmath>

int main()
{
    float a;

    std::cin >> a;

    float prod = 1; 
    for (int i = 0; i <= 10; i++)
    {
        prod*=(a-i);
    }

    std::cout << prod << std::endl;

    return 0;
}
