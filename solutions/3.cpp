#include <iostream>
#include <cmath>


int main()
{
    int number;

    std::cout << "input number: ";
    std::cin >> number;

    bool result = (((number / 1000) + ((number / 100) % 10) + ((number / 10) % 10)) % 5 == 0);

    std::cout << std::boolalpha << result << std::endl;
    
    return 0;
}