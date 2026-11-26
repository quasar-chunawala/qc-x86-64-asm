#include "add_sub_i32.h"
#include <iostream>

void DisplayResults(int a, int b, int c, int d, int r1, int r2){
    std::cout << "----------- Results for add_sub_i32 -------------" << "\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n";
    std::cout << "r1 = " << r1 << "\n";
    std::cout << "r2 = " << r2 << "\n";
}

int main(){
    int a = 10;
    int b = 40;
    int c = 9;
    int d = 6;

    int r1 = (a + b) - (c + d) + 7;
    int r2 = AddSubI32_a(a, b, c, d);
    DisplayResults(a, b, c, d, r1, r2);
    return 0;
}