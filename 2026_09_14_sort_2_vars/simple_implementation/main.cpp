#include <iostream>
#include <utility>

void my_sort(int *arr, const int size);

int main() {
	int size;
	std::cout << "Введите размер массива: ";
	if (!(std::cin >> size) || size < 1 || size > 100) {
		std::cout << "Ошибка: размер массива должен быть от 1 до 100.\n";
		return 1;
	}

	int arr[100];
	std::cout << "Введите элементы массива: ";
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}

	std::cout << "Массив до сортировки: ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	my_sort(arr, size);

	std::cout << "Массив после сортировки: ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';
	return 0;
}

void my_sort(int *arr, const int size) {
	for (int i = 0; i < size - 1; ++i) {
		for (int j = 0; j < size - 1 - i; ++j) {
			if (arr[j] > arr[j + 1]) {
				std::swap(arr[j], arr[j + 1]);
			}
		}
	}
}
