#include "my.h"
#include <iostream>
int foo = 42;



int main()
{
    foo = 7;
    print_foo();
    print(99);

    char cc;
    std::cin >> cc; 

    

    int x = 7;
    int y = 9;
    swap_v(x, y); // replace ? by v, r, or cr
    swap_v(7, 9);

    std::cout << "x: " << x;
    std::cout << " y: " << y << "\n";

    const int cx = 7;
    const int cy = 9;

    swap_cr(cx, cy);
    swap_cr(7.7, 9.9);
    std::cout << "cx: " << cx;
    std::cout << " cy: " << cy << "\n";

    //double dx = 7.7;
    //double dy = 9.9;
    //swap_r(dx, dy); 
    //swap_r(7.7, 9.9); nie dziala


    return 0;
}

