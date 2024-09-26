#include <iostream>
#include <cmath>


int main()
{
    float x, y;

    std::cout << "input x, y: ";
    std::cin >> x >> y;

    double circle = pow((x - 0), 2) + pow((y - 0), 2) ;
    bool isInArea {((circle <= (pow(7,2))) && ((0 <= x <= 7) && (0 <= y <= 7))) || ((circle <= (pow(6,2))) && ((0 <= x <= 6) && (-6 <= y <= 0))) || ((circle <= (pow(8,2))) && ((-8 <= x <= 0) && (0 <= y <= 8)))};

    std::cout << std::boolalpha << isInArea << std::endl;

    return 0;
}