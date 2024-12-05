#pragma once

class Counter {
public:
	Counter();
	Counter(int i);

	void increment();

	void decrement();

	void score();

private:
	int count;
};
