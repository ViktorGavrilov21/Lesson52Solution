#include "logic.h"

int main() {
	int num;

	cout << "Input your number: ";
	cin >> num;

	print(is_perfect_num(num)
		? "Yes, it is perfect number"
		: "No, it isn`t perfect number");


	return 0;
}