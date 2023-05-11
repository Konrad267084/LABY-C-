#include <iostream>

namespace X {
    int var;
    void print() { 
        std::cout << "X's var: " << var << "\n";
    }
}

namespace Y {
    int var;
    void print() { 
        std::cout << "Y's var: " << var << '\n';
    }
}

namespace Z {
    int var;
    void print() { 
        std::cout << "Z's var: " << var << "\n";
    }
}

int main() {
    X::var = 7;
    X::print(); // print X's var

    using namespace Y;
    var = 9;
    print(); // print Y's var

    {
        using namespace Z;
        Z::var = 11;
        Z::print(); // print Z's var
    }

    print(); // print Y's var
    X::print(); // print X's var

    return 0;
}
