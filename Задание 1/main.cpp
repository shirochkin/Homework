#include <iostream>
#include <windows.h>
#include "homework301124.h"

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a{ 5 }, b{ 56 };
	std::cout << mult(a, b);
}

