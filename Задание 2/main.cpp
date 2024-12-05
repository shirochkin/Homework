#include <iostream>
#include <windows.h>
#include "counter.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	std::setlocale(LC_ALL, "russian");

	Counter counter;
	char c; int i;

	while (true) {
		begin:
		while (true) {
			std::cout << "Do you want enter initial value (y/n)?: " << std::endl;
			std::cin >> c;
			if (c == 'y') {
				std::cout << "Enter initial value: " << std::endl;
				std::cin >> i;
				counter = Counter(i);
				break;
			}
			else if (c == 'n') {
				counter = Counter();
				break;
			}
			else {
				std::cout << "Enter y or n!" << std::endl;
			}
		}

		while (true) {
			std::cout << "Enter command ('+' - increase, '-' - reduce, '=' - watch, 'x' - quit): " << std::endl;
			std::cin >> c;
			switch (c) {
			case '+':
				counter.increment();
				break;
			case '-':
				counter.decrement();
				break;
			case '=':
				counter.score();
				break;
			case 'x':
				std::cout << "Good bye!" << std::endl;
				goto begin;
				break;
			default:
				std::cout << "Wrong input!" << std::endl;
				break;
			}
		}

	}

	return 0;
}