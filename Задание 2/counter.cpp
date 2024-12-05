#include <iostream>
#include "counter.h"
#include <windows.h>

Counter::Counter() { Counter::count = 1; };
Counter::Counter(int i) {Counter::count = i; };

	void Counter::increment() {

		this->count++;
	}

	void Counter::decrement() {

		this->count--;
	}

	void Counter::score() {


		std::cout << this->count << std::endl;

	}