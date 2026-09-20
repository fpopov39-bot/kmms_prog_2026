#include "sortings.hpp"

#include <utility>

void biv::bubble_sort(int* const arr, const int size) {
    if (size <= 1) return;

    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void biv::my_sort(int* const arr, const int size) {
    biv::bubble_sort(arr, size);
}