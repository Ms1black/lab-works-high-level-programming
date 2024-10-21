#include <iostream>
#include <cmath>


int main() 
{
    double sum {}, prev {}, next {};
    const double eps = 0.002;
    int n = 1;

    next = (pow(-1,(n-1)) / (pow(n,n)));

    do 
    {
        n++;
        sum += next;
        prev = next;
        next = (pow(-1,(n-1)) / (pow(n,n)));
    }
    while (fabs(prev - next) > eps);
    
    std::cout << sum << std::endl;

    return 0;
}
