#include <iostream>
#include <vector>


void print_array10(std::ostream& os, int* a) {
    for (int i = 0; i < 10; i++) {

        os << a[i] << " \n";
    }
}

void print_array(std::ostream& os, int* a, int n) {
    for (int i = 0; i < n; i++) {
        os << a[i] << " \n";
    }
   
}

void print_vector(std::ostream& os, std::vector<int> array, int n) {
    for (int i = 0; i < n; i++) {
        os << array[i] << " \n";
    }

}

int main()
{
    // 1
    int* array1 = new int[10];
    
    // 2
    std::cout << "Values of the array: \n";
    for (int i = 0; i < 10; ++i)
    {
        array1[i] = i;
        std::cout << array1[i] << " \n";
        
    }
    std::cout << "\n\n";
    
   

    // 4
    print_array10(std::cout, array1);
    std::cout << "\n\n";
    
    // 5
    int* array2 = new int[10];
    for (int i = 0; i < 10; i++) {
        array2[i] = 100 + i;
    }
    
    // 6
    int* array3 = new int[11];
    for (int i = 0; i < 11; i++) {
        array3[i] = 100 + i;
    }
    
    // 7
    print_array(std::cout, array2, 10);
    std::cout << "\n\n";
    
    print_array(std::cout, array3, 11);
    std::cout << "\n\n";
    
    // 8
    int* array4 = new int[20];
    for (int i = 0; i < 20; i++) {
        array4[i] = 100 + i;
    }
    print_array(std::cout, array4, 20);
    std::cout << "\n\n";

    
    // 3
    delete[] array1;

    // 9
    delete[] array2;
    delete[] array3;
    delete[] array4;

    // 10
    std::vector<int> vector1(10);
    for (int i = 0; i < 10; i++) {
        vector1[i] = 100 + i;
    }
    print_vector(std::cout, vector1, 10);
    std::cout << "\n\n";
    

    std::vector<int> vector2(11);
    for (int i = 0; i < 11; i++) {
        vector2[i] = 100 + i;
    }
    print_vector(std::cout, vector2, 11);
    std::cout << "\n\n";
    

    std::vector<int> vector3(20);
    for (int i = 0; i < 20; i++) {
        vector3[i] = 100 + i;
    }
    print_vector(std::cout, vector3, 20);
    std::cout << "\n\n";

    return 0;
}


