#include "io.hpp"
#include "sortings.hpp"
#include <iostream>

int main() {
    int size;
    std::cout << "Введите размер массива: ";
    if (!(std::cin >> size) || size < 1 || size > 100) {
        std::cout << "Ошибка: размер массива должен быть от 1 до 100.\n";
        return 1;
    }
    int arr[100];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    biv::print_array("Массив до сортировки: ", arr, size);

    biv::my_sort(arr, size);

    biv::print_array("Массив после сортировки: ", arr, size);
    return 0;
}