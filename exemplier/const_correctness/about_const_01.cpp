#include <iostream>

int main() {
	int val1 = 10;
	int val2 = 12;
	const int * const p1 = &val1;
	int *p2 = &val2;
	
	std::cout << "val1: " << val1 << std::endl;
	std::cout << "&val1: " << (void*)&val1 << std::endl;
	std::cout << "p1: " << p1 << std::endl;
	std::cout << "val2: " << val2 << std::endl;
	std::cout << "&val2: " << (void*)&val2 << std::endl;
	std::cout << "p2: " << p2 << std::endl;

	val1 = 12;
	val2 = 10;
	
	std::cout << "*p1: " << *p1 << std::endl;
	std::cout << "*p2: " << *p2 << std::endl;

	// p2 = p1; // IMPOSSIBLE CAR p2 n'est pas const
	// p1 = p2; // IMPOSSIBLE CAR p1 est const 
	// p1 = &val2; // IMPOSSIBLE CAR p1 est const 
	
	return 0;
}