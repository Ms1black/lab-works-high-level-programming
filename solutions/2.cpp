#include <iostream>

int main()
{

    float A, B, C;

    std::cin >> A >> B >> C;

    float min = A, max = A;

    if (B > max){
        max = B;
    }
    if (C > max){
        max = C;
    }
    
    if (C < min){
        min = C;
    }
    if (B < min){
        min = B;
    }

    if ((min + max) < 5){
        max = 0;
    } else {
        if (min == A){
            min = B * C;
        } else if (min == B){
            min = A * C;
        } else {
            min = A * B;
        }
    }


    std::cout << "min: " << min << " max: "<< max << std::endl;

    return 0;
}