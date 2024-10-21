#include <iostream>
#include <cmath>


int main()
{
    int n;

    std:: cin >> n;

    long long sum = 0;

    for (int k = 1; k <= n; k++) {
        long long res = (pow(-1, k))*((2*(pow(k, 2)))+ 1);
        long long factorial = 1;
        for (int i = 2; i <= res; i++) {
            factorial *=i;
        }
        sum += res;
    }

    std::cout << sum << std::endl;

    return 0;
}