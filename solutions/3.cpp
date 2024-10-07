#include <iostream>
#include <cmath>


int main()
{
    int k, M;
    int x {3};
    float y;

    std::cin >> k;

    M = (k % 10) + (k / 1000);
    switch (x)
    {
        case 3:
        case 5:
            y = (pow((tan(k)),2) + pow((sin(k / 2.7)), 2));
            break;
        case 7:
        case 8:
        case 9:
            y = log(fabs(k - 6.3));
            break;
        case 10:
            y = exp(fabs(k- (0.2*(pow(k, 2)))));
            break;
        case 12:
        case 13:
            y = ((pow(k, 2)) + (2.6*k) + 3.7);
            break;
        default:
            y = (k * (sin(pow(k, 2)))) - (6*k);
            break;
    }

    std::cout << y << std::endl;

    return 0;
}