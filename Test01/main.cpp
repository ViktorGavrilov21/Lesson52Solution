#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int size;

	cout << "Input size: ";
	cin >> size;

	init(array, size, -100, 100);
	
	print("Array before: ");
	print(convert(array, size));

	sort_bubble(array, size);

	print("\nArray after sorting: ");
	print(convert(array, size)  +"\n");

	return 0;
}