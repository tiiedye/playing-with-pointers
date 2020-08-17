#include <iostream>

using namespace std;

int *apply_all(const int *const arr1, size_t size1, const int const* arr2, size_t size2);
void print(const int *const array, const int size);

int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
    
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};
    
    cout << "Array 1: ";
    print(array1,array1_size);
    
    cout << "Array 2: ";
    print(array2,array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: ";
    print(results, results_size);
    
    cout << endl;

    return 0;
}

int *apply_all(const int* const arr1, size_t size1, const int *const arr2, size_t size2) {
    int *new_array{};
    new_array = new int[size1, size2];

    int pos {0};
    for (size_t i{0}; i < size2; ++i) {
        for(size_t j{0}; j < size1; ++j) {
            new_array[pos] = arr1[j] * arr[2];
            ++pos
        }
    }
}
