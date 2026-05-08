#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init(array, size, -100, 100);

	print("Array before: ");
	print(convert(array, size));

	return 0;
}