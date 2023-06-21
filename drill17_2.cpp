#include <iostream>
#include <vector>

void print_array(std::ostream& os, int* a, int n) {
    for (int i = 0; i < n; i++) {
        os << a[i] << " ";
    }
    
}

int main() {
    // 1
    int* p1 = new int;
    *p1 = 7;
    // 2
    std::cout << "p1 value: " << p1 << "\n";
    std::cout << "Pointed value: " << *p1 << "\n\n";

    // 3
    int* p2 = new int[7];
    for (int i = 0; i < 7; i++) {
        p2[i] = 1 << i;
    }

    // 4
    std::cout << "p2 value: " << p2 << "\n";
    std::cout << "Pointed array values: ";
    print_array(std::cout, p2, 7);

    std::cout << "\n\n";

    // 5
    int* p3 = p2;

    // 6
    p2 = p1;

    // 7
    p2 = p3;

    // 8
    std::cout << "p1 value: " << p1 << "\n";
    std::cout << "p1 pointed value: " << *p1 << "\n\n";
    std::cout << "p2 value: " << p2 << "\n";
    std::cout << "p2 pointed values: " ;
    print_array(std::cout, p2, 7);

    // 9
    delete p1;
    delete[] p2;

    // 10
    int* p1_array = new int[10];
    for (int i = 0; i < 10; i++) {
        p1_array[i] = 1 << i;
    }

    // 11
    int* p2_array = new int[10];

    // 12
    for (int i = 0; i < 10; i++) {
        p2_array[i] = p1_array[i];
    }
    
    // 13
    std::vector<int> v1(10);
    for (int i = 0; i < 10; i++) {
        v1[i] = 1 << i;
    }

    std::vector<int> v2(10);
    v2 = v1;

    return 0;

}